#include <stdio.h>
#include <math.h>
#define PI 3.14159265359

float calcularAreaRectangulo(float alt, float larg){
	return alt * larg;
}
float calcularPerimetroRectangulo(float alt, float larg){
	return 2 * (alt + larg);
}
float calcularDiagonalRectangulo(float alt, float larg){
	return sqrt (alt * alt + larg * larg);
}
float calcularAreaCirculo(float rad){
        return  PI * rad * rad;
}
float calcularPerimetroCirculo(float rad){
        return PI * rad * 2;
}
void imprimirResultados(int figura, float area, float perimetro, float diagonal){
	if(figura == 1){
		printf("Área del rectángulo: %.2f\n", area);
	        printf("Perímetro del rectángulo: %.2f\n", perimetro);
		printf("Diagonal del del rectángulo: %.2f", diagonal);
	}else{
		printf("Área del circulo: %.2f\n", area);
                printf("Perímetro del circulo: %.2f\n", perimetro);
	}
}

int main(void){

	int figura;
	int fig_bien = 1;

	printf("Elija con que figura desea trabajar: \n1.Rectángulo\n2.Círculo\n");
	scanf("%d", &figura);

	while(fig_bien){
		switch(figura){
                case 1:
                        float alt, larg;
			fig_bien = 0;
                        
			printf("Ingrese la altura del rectángulo: \n");
			scanf("%f", &alt);
			printf("Ingrese el largo del rectángulo: \n");
                        scanf("%f", &larg);

			float area_rect = calcularAreaRectangulo(alt, larg);
			float perim_rect = calcularPerimetroRectangulo(alt, larg);
			float diagon_rect = calcularDiagonalRectangulo(alt, larg);
			imprimirResultados(figura, area_rect, perim_rect, diagon_rect);	
			break;
		case 2:
                        float rad;
			fig_bien = 0;

                        printf("Ingrese el radio del círculo: \n");
                        scanf("%f", &rad);

                        float area_circ = calcularAreaCirculo(rad);
                        float perim_circ = calcularPerimetroCirculo(rad);
			imprimirResultados(figura, area_circ, perim_circ, 0);
                        break;
	  	default:
                        printf("Elija una figura válida: \n1.Rectángulo\n2.Círculo\n");
                        scanf("%d", &figura);
       		 }
	}
return 0;
}
