#!/bin/bash
for VAR in $@
do
    test -f $VAR
    if [ $? -eq 0 ]
    then
        echo "$VAR es archivo"
    else
        test -d $VAR
        if [ $? -eq 0 ]
        then
            echo "$VAR es directorio"
        else
            echo "$VAR no es ni directorio ni variable"
        fi
    fi
done
