#include <stdio.h>

int main(void)
{
	int idade;
	printf("Qual sua idade? ");
	scanf("%d", &idade);

	if (idade < 0) {
			puts("Ainda não nasceu");
		} else {
			if (idade <= 15) {
				puts("Não vota");
			}else {
				if (idade <= 17) {
					puts("Votar é opcional");
				}else {
					if (idade == 42) {
						puts("Ganha Prêmio TOP sem necessidade de votar");
					}else { if (idade <= 65) {
						puts("Obrigatorio votar");	
					}else { 
						if (idade == 84) {
							puts("Ganha prêmio Premium com necessidade de votar")
						}else { if (idade > 65) {
							puts("Opcional");
						}
					}
				}
			}
		}
	}
}
	return 0;
}
