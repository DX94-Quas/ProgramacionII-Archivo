#!/bin/bash
test -d $1
if [ $? -eq 0 ]
then
    echo "usted metio" $1 "como argumento"
else
    test -f $1
    if [ $? -eq 0 ]
    then
        echo "usted metio" $1 "como argumento"
    else
        echo "usted tiene que meter o un archivo o un directorio"
    fi
fi
