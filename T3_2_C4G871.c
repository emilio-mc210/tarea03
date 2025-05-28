#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 100

/*
* Funcion para revisar una cadena de caracteres.
*
* Params:
* - int *linea: Linea de texto del archivo a revisar (si solo tiene un numero es valida, sino es invalida).
*
* Retorno:
* - 0 si la linea no es valida.
* - 1 si la linea solo contiene un numero.
*/
int revisar_numero(char *linea){
    int i=0;

    //Ignorar signo negativo si hay
    if(linea[i] == '-'){
        i++;
    }
    
    int tiene_numero = 0;

    //Verificar el resto de la linea
    for(;linea[i] != '\0' && linea[i] != '\n';i++){
        //Revisa si no es un digito de 0-9
        if(!isdigit(linea[i])){
            return 0;
        }
        tiene_numero = 1;
    }

    return tiene_numero;
}

int main(){
    char linea[MAX];

    //Revisa que haya una linea valida
    while(fgets(linea, MAX, stdin) != NULL){
        if(revisar_numero(linea)){
            printf("Numero: %s", linea);
        }
        else{
            fprintf(stderr, "Error - Linea invalida: %s",linea);
        }
    }

    return 0;
}