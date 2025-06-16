// https://github.com/AgustinSagripantti/TP3-Informatica

#include <stdio.h>

int main()
{
    float peso;
    float altura;
    float imc;
    
    printf("Ingrese su peso en kilogramos: ");
    scanf("%f", &peso);

    while(peso < 0){
        printf("Por favor ingrese un peso válido: ");
        scanf("%f", &peso);
    }

    printf("Ingrese su altura en metros: ");
    scanf("%f", &altura);

    while(altura < 0){
        printf("Por favor ingrese una altura válida: ");
        scanf("%f", &altura);
    }
    
    imc = peso / (altura * altura);
    
    printf("Su imc es: %.2f", imc);
    
    printf("\n\nÍndice | Condición\n------------------\n<18.5 | Bajo peso\n18.5 - 24.9 | Peso normal\n25 - 29.9 | Sobrepeso\n>30 | Obesidad\n\n");
    
    if(imc < 18.5){
        printf("Usted se encuentra en un bajo peso");
    }else if(imc <= 24.9){
        printf("Usted se encuentra en un peso normal");
    }else if(imc <= 29.9){
        printf("Usted se encuentra en sobrepeso");
    }else{
        printf("Usted se encuentra en un estado de obesidad");
    }
    
    return 0;
}