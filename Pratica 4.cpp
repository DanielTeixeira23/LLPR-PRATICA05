#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float altura, massa, imc;
	printf("Calcular o IMC \n\n");
	
	printf("Digite a altura: ");
	scanf("%f", &altura);
	
	printf("Digite a massa: ");
	scanf("%f", &massa);
	
	imc = altura / (massa * massa);
	
	printf("\n\n");
	printf ("O IMC é: %.2f", imc);
	
	return 0;
}
