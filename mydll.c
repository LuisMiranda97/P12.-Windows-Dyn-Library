#include <stdio.h>
#include <stdlib.h>

//funcion para convertir de binario a entero
long int asciiBinaryToInt(char *str)
{
    char *ptr;
    long int conversion = strtol(str, &ptr, 2);
    return conversion;
}

//funcion para convertir de hexadecimal a entero
long int asciiHEXToInt(char *str)
{
    char *ptr;
    long int conversion = strtol(str, &ptr, 16);
    return conversion;
}

//funcion para convertir un string a double
double asciiToDouble(char *str)
{
    
    double conversion = atof(str);
    return conversion;
}