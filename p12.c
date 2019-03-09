#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    long int iResult;
    int iOption;
    double dResult;
    char str[100];


    printf("Introduce el string de caracteres:\n");
    scanf("%s", str);
    
    printf("Selecciona una de las opciones:\n1. Ascii Binary to Int\n2. Ascii Hex to Int\n3. Ascii To Double\n");
    scanf("%i", &iOption);

    switch (iOption)
    {
        case 1:
            iResult = asciiBinaryToInt(str);
            printf("Resultado: %i", iResult);
            break;
        case 2:
            iResult = asciiHEXToInt(str);
            printf("Resultado: %i", iResult);
            break;
        case 3:
            dResult = asciiToDouble(str);
            printf("Resultado: %f", dResult);
            break;
        default:
            printf ("Opcion invalida");
            break;
    }


    return 0;
}