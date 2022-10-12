#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int x, troco;
	printf("Troco \n\n");
	
	printf("Quantidade de dinheiro: ");
	scanf("%d", &x);

	troco = x % 7; 
	
	printf("\n\n");
	printf("E o cliente perdeu no troco: %dR$", troco);
		
	return 0;
}
