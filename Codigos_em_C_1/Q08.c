#include <stdio.h>
#include <stdlib.h>

//Quest�o 08
int main(){
	float n1;
	float n2;
	float div;
		
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o primeiro numero: ");
	scanf("%d", &n2);
	
	//Divis�o 
	if (n2 != 0){
		div = n1/n2;
		printf("Divisao: %.2f \n", div);
	} else {
		printf("Erro: Divisao por 0\n");
	}
	
	system("pause");
	return 0;
}
