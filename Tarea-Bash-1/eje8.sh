#!/bin/bash

cat /etc/shadow
if [ "$?" -eq "0" ]
then
    echo "comando ejecutado exitosamente"
    exit 0
else
    echo "comando fallo"
    exit 1
fi
