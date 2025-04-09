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

	if (simbolo == '+') {
		printf("Resultado e: %.2f", n1+n2);
	} else {
		if (simbolo == '-') {					
			printf("Resultado e: %.2f", n1-n2);
		}else {
			if (simbolo == '*') {
				printf("Resultado e: %.2f", n1*n2);
			}else {
				if (simbolo == '/') {
					printf("Resultado e: %.2f", n1/n2);
				} else {
					puts("Fez merda irmão");
				}
			}
		}
	}

	return 0;
}
