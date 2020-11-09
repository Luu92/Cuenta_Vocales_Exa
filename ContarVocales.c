#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int contar_Vocales(char *palabra){
    int contador = 0;
    int a=0,e=0,i=0,o=0,u=0;
    while (*palabra != '\0')
    {
        if (*palabra == 'a' || *palabra == 'e' || *palabra == 'i' || *palabra == 'o' || *palabra == 'u')
        {
            contador++;
        }

        palabra++;
        switch (*palabra)
        {
            case 'a':
                a++;
            break;
            
            case 'e':
                e++;
            break;
            
            case 'i':
                i++;
            break;
            
            case 'o':
                o++;
            break;
            
            case 'u':
                u++;
            break;
            
            default:
            break;
        }
   
    }
    printf("Tiene %d veces 'a' \n",a);
    printf("Tiene %d veces 'e' \n",e);
    printf("Tiene %d veces 'i' \n",i);
    printf("Tiene %d veces 'o' \n",o);
    printf("Tiene %d veces 'u' \n",u);

    return contador;
}


int main(int argc, char const *argv[])
{
    char *palabra;
    palabra = (char *)malloc(50*sizeof(char));

    palabra = "esternocleidomastoideo";

    int contador = contar_Vocales(palabra);
    printf("La Palabra ");
    for (int i = 0; i < 23; i++)
    {
        printf("%c",palabra[i]);
    }
    
    printf(" tiene %d vocales.",contador);

    return 0;
}


