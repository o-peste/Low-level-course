#include <stdio.h>

int main(){
	int a,b,c;
	printf("Programa simples com menu\n");
	printf("Suas opições são: (1) somar dois números - (2) sair\n");
	printf("Escolha um:");
	scanf("%d",&a);
	switch(a){
		case 1:
			printf("Escreva um número:");
			scanf("%d",&b);
			printf("Escreva outro número:");
			scanf("%d",&c);
			printf("Essa é a soma: %d\n", b + c);
			break;
		case 2:
			printf("Saindo...\n");
			return 0;
		default:
			printf("Essa não é uma opição válida!\n");
			return 0;
	}
	return 0;
}