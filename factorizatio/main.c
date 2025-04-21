#include <stdio.h>

void factor(int number) {
    if (number == 1) {
        return;
    }
    
    if (number % 2 == 0) {
        printf("2 ");
        factor(number / 2);
    } else if (number % 3 == 0) {
        printf("3 ");
        factor(number / 3);
    } else {
        // Se nenhum dos casos anteriores bate, o número é primo.
        printf("%d ", number);
    }
}

int main(void) {
    factor(45);
    return 0;
}

