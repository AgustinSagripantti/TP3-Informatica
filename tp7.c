//https://github.com/AgustinSagripantti/TP3-Informatica

#include <stdio.h>
#define TAM 3

int main(){
	int codigo[TAM];
	float precio[TAM];
	float max;
	float min;
	int codMax;
	int codMin;

	printf("Debe ingresar %d productos, se le pedirá código de barra y precio: \n", TAM);
	
	for(int i = 0 ; i < TAM ; i++){
		do{
			printf("Ingrese el código de barra del producto Nº %d:  (1 - 999999999)\n", i+1);
                	scanf("%d", &codigo[i]);	
		}while(codigo[i] < 1 || codigo[i] > 999999999);		

		 do{
                        printf("Ingrese el precio del producto Nº %d: \n", i+1);
                        scanf("%f", &precio[i]);
                }while(precio[i] < 0);

		if(i == 0){
			max = precio[i];
                        codMax = codigo[i];
			min = precio[i];
                        codMin = codigo[i];
		}

		if(precio[i] > max){
			max = precio[i];
			codMax = codigo[i];
		}
		if(precio[i] < min){
			min = precio[i];
			codMin = codigo[i];	
		}
	}

	printf("%-15s %-15s\n", "Código", "Precio");

	for(int i = 0 ; i < TAM ; i++){
		printf("%-15d %-15.2f\n", codigo[i], precio[i]);
	}

	printf("Más caro: [%d] %.2f\n", codMax, max);
	printf("Más barato: [%d] %.2f", codMin, min);

return 0;
}
