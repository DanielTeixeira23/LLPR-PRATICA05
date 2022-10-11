#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float n1, n2, multiplicacao, divisao, adicao, subtracao;
	printf("Calculadora \n\n");
	
	printf("Digite o número: ");
	scanf("%f", &n1);
	
	printf("Digite o número: ");
	scanf("%f", &n2);
	
	multiplicacao = n1 * n2;
	divisao = n1 / n2;
	adicao = n1 + n2;
	subtracao = n1 - n2;
	
	printf("Resultado é: \n %.2f \n %.2f \n %.2f \n %.2f \n", multiplicacao, divisao, adicao, subtracao);	
	
	return 0;
}
