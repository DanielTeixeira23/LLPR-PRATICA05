#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int base, altura, area;
	printf("�rea do Tri�ngulo \n\n");
	
	printf("Digite a base do tri�ngulo: ");
	scanf("%d", &base);
	
	printf("Digite a altura do tri�ngulo: ");
	scanf("%d", &altura);
	
	area = (base * altura) / 2;
	
	printf("\n\n");	
	printf("A �rea do tri�ngulo �: %d", area);
	
	return 0;
}
