#include <stdio.h>

int main() {

char tipo;
int c, f; 

printf("Escreva C para inserir um valor em celcius e F para um valor em Fahreinheit.\n");
scanf("%c", &tipo);

if (tipo == 'C') {
    printf("Digite o valor em celcius: \n");
    scanf("%d", &c);
    f = (1.8 * c) + 32;
    printf("%d celcius corresponde a %d fahrenheit.\n", c, f);
} else if (tipo == 'F') {
    printf("Digite o valor em fahreinheit: \n");
    scanf("%d", &f);
    c = (f - 32) / 1.8;
    printf("%d fahrenheit corresponde a %d celcius.\n", f, c);
}
    return 0;
}
