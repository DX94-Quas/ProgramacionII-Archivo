#!/bin/bash

contar_archivos()
{
    find . -type f | wc -l
}
contar_archivos
