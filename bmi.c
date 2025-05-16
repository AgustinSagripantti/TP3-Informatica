#include <stdio.h>

int main()
{
    float peso;
    float altura;
    float imc;
    
    printf("Ingrese su peso en kilogramos: ");
    scanf("%f", &peso);
    printf("Ingrese su altura en metros: ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    
    printf("Su imc es: %.2f", imc);
    
    printf("\n\nÍndice | Condición\n------------------\n<18.5 | Bajo peso\n18.5 - 24.9 | Peso normal\n25 - 29.9 | Sobrepeso\n>30 | Obesidad");
    
    return 0;
}