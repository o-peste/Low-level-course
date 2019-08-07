#include <stdio.h>

int main(){
	int a,b;
	printf("É par ou impar?\n");
	printf("Escreva um número:");
	scanf("%d",&a);
	printf("Escreva mais um número:");
	scanf("%d",&b);
	if (a % 2 == 0 || b % 2 == 0){
		printf("Algum deles é par\n");
		printf("Só quem colocou par vai ver a surpresa, coloque um número:");
		scanf("%d",&a);
		if (a % 10 == 0){
			printf("É potência de 10!\n");
		}
		else{
			printf("Não é potência de 10...\n");
		}
	}
	else{
		printf("Só tem impar\n");
	}
	if (a == b){
		printf("Os números são iguais!\n");
	}
	else{
		printf("Os números são diferentes!\n");
	}
	return 0;
}