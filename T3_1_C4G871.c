#include<stdio.h>
#include<string.h>
#define MAX 100

/*
* Funcion para revisar un string caracter por caracter.
*
* Params:
* - int *string: Cadena de texto ingresada por el usuario.
* - int letra: Caracter a revisar en la cadena.
*
* Retorno:
* - La cantidad de veces que se repite letra en string.
*/
int revisar_string(char *string, char letra){
    int repeticion = 0;

    for(int i = 0; string[i] != '\0';i++){
        if(string[i] == letra){
            repeticion++;
        }
    }

    return repeticion;
}

int main(){
    char texto[MAX];
    char letra;

    //Obtener cadena de texto
    printf("Ingrese un string: ");
    fgets(texto, MAX, stdin);

    //Obtener caracter
    printf("Ingrese un caracter para revisar: ");
    scanf(" %c", &letra);

    int repeticion = revisar_string(texto, letra);

    printf("El caracter %c se repite %i veces.\n",letra,repeticion);

    //Imprimir el string al reves
    printf("El string al reves es: ");
    for(int i = strlen(texto)-1; i>=0; i--){
        printf("%c",texto[i]);
    }
    printf("\n");

    return 0;
}