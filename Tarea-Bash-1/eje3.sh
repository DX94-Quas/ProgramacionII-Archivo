#/bin/bash
read -p 'Ingrese dir: ' variable

test -f $variable
if [ $? -eq 0 ]
then
    echo "es archivo regular"
else
    test -d $variable
    if [ $? -eq 0 ]
    then
        echo "es directorio"
    else
        echo "es otro tipo de archivo"
    fi
fi
