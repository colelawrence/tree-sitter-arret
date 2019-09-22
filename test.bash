#!/bin/bash
export A_SEXP=a.sexp
export B_SEXP=b.sexp
if test -f $A_SEXP; then
    mv $A_SEXP $B_SEXP
fi

while true
do
    tree-sitter generate
    if [ $? -eq 0 ]; then
        tree-sitter parse $TEST_ARRET > $A_SEXP
        if [ $? -eq 1 ]; then
            echo "Continue?"
            read -p "$*"
        fi
        git diff --no-index $B_SEXP $A_SEXP
        cat $A_SEXP | less -p ERROR
        mv $A_SEXP $B_SEXP
    else
        echo "Continue..."
        read -p "$*"
    fi
done
