#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char senha[30] = "root";
	char entSenha[30];
	int enter = 1;
	
	do {
		printf("Digite a senha: ");
		scanf("%s", entSenha); //ler a senha
		
		if (!strcmp(entSenha, senha)){
			printf("Senha correta!\n");
			enter = 0;
		} else {
			printf("Senha incorreta!\n");
		}
	} while (enter);
	
	system("pause");
	return 0;
}
