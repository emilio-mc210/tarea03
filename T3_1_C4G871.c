#include<stdio.h>
#include<string.h>
#define MAX 100

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

    printf("Ingrese un string: ");
    scanf(" %s", texto);

    printf("Ingrese un caracter para revisar: ");
    scanf(" %c", &letra);

    int repeticion = revisar_string(texto, letra);

    printf("El caracter %c se repite %i veces.\n",letra,repeticion);

    //Imprimir el string al reves
    printf("El string %s al reves es: ", texto);
    for(int i = strlen(texto)-1; i>=0; i--){
        printf("%c",texto[i]);
    }
    printf("\n");

    return 0;
}