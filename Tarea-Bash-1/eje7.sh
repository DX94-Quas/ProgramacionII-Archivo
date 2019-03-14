#/bin/bash
#read -p 'Ingrese dir: ' variable

test -f $1
if [ $? -eq 0 ]
then
    echo "es archivo regular"
else
    test -d $1
    if [ $? -eq 0 ]
    then
        echo "es directorio"
    else
        echo "es otro tipo de archivo"
    fi
fi
