#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float a, b, c, formula1, formula2, formula3, formula4;
	printf("O homem que calculava \n\n");
	
	printf("Digite o número: ");
	scanf("%f", &a);
	
	printf("Digite o número: ");
	scanf("%f", &b);
	
	printf("Digite o número: ");
	scanf("%f", &c);
	
	formula1 = (a * b) / c;
	formula2 = a*a + b + 5*c;
	formula3 = ( a*b*c + b) + (c/3 * 5) - 1;
	formula4 = (a*b*c) * (a*b*c) * (a*b*c) / 2;
	
	
	printf("Resultado é: \n %.2f \n %.2f \n %.2f \n %.2f \n", formula1, formula2, formula3, formula4);	
	
	
	return 0;
	
}
