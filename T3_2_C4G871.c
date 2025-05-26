#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 100

//* ./programa < arhcivoin > output 2> error
int revisar_numero(char *linea){
    int i=0;

    //Ignorar signo negativo si hay
    if(linea[i] == '-'){
        i++;
    }
    
    int tiene_numero = 0;

    //Verificar el resto de la linea
    for(;linea[i] != '\0' && linea[i] != '\n';i++){
        if(!isdigit(linea[i])){
            return 0;
        }
        tiene_numero = 1;
    }

    return tiene_numero;
}

int main(){
    char linea[MAX];
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