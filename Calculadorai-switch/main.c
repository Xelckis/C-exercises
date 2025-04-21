#include <stdio.h>

int main(void)
{
	float n1;
	float n2;
	char simbolo;

	printf("Fale a primeira Nota: ");
	scanf("%f", &n1);

	printf("Fale sua segunda nota: ");
	scanf("%f", &n2);

	printf("Escolha uma operação (+, -, /, *): ");
	scanf(" %c", &simbolo);

	switch (simbolo) {
		case '+': printf("Resultado e: %.2f", n1+n2);
		break;
	
		case '-': printf("Resultado e: %.2f", n1-n2);
			break;
		case '*': printf("Resultado e: %.2f", n1*n2);
			  break;
		
		case '/': if (n2 == 0) {
			puts("Proibido divisão por 0");
		}else {
				printf("Resultado e: %.2f", n1/n2);
			}
			  break;
		
		default:  puts("Fez merda irmão");
				}

	
	return 0;
}
