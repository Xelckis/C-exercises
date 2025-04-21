#include <stdio.h>

int main(void)
{
	int num;
	printf("Escolha um numero entre 1 e 100: ");
	scanf("%d", &num);

	if (num > 1 && num < 100) {
		for (int i = 0; i <= num; i++) {
			if (i%10 == 0) {
				printf("M10\n");
			}else if (i%7 == 0){
				if (i%5 == 0) {
					printf("Bingo\n");
				}else {
					printf("M7\n");
				}
			}else if (i%5 == 0){
				printf("M5\n");
			}else {
				printf("%d\n", i);
			}
		}
	} else{
		puts("Numero não está entre 1 e 100, tente novamente.");
	}
	return 0;
}
