#include <stdio.h>

int main (){
    float peso, estatura, IMC;
    printf("Ingrese su peso: \n");
    scanf("%f", &peso);
    printf("Ingrese su estatura: \n");
    scanf("%f", &estatura);
    IMC=peso/(estatura*estatura);
   if (IMC <= 18.4) {
        printf("Bajo peso\n");
    } else if (IMC <= 24.9) {
        printf("Normal\n");
    } else if (IMC <= 29.9) {
        printf("Sobrepeso\n");
    } else if (IMC <= 34.9) {
        printf("Obesidad clase 1\n");
    } else if (IMC <= 39.9) {
        printf("Obesidad clase 2\n");
    } else {
        printf("Obesidad clase 3\n");
    }

    return 0;
}


