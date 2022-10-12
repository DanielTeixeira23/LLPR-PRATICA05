#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int base, altura, area;
	printf("Área do Triângulo \n\n");
	
	printf("Digite a base do triângulo: ");
	scanf("%d", &base);
	
	printf("Digite a altura do triângulo: ");
	scanf("%d", &altura);
	
	area = (base * altura) / 2;
	
	printf("\n\n");	
	printf("A área do triângulo é: %d", area);
	
	return 0;
}
