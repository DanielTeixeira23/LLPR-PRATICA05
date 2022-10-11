#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int minutos, segundos;
	
	printf("Quantos minutos tem em X segundos: \n\n");
	
	printf("Digite os minutos: ");
	scanf("%d", &minutos);
	
	segundos = minutos * 60;
	
	printf("A resposta é: %d", segundos);
	
	return 0;
}
