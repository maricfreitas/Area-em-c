#include <stdio.h>

float base, altura, area;

int main() {
    printf("***********");
    printf("Digite a base\n");
    scanf("%f",&base);
    printf("Digite a altura\n");
    scanf("%f",&altura);

    area=(base*altura)/2;

    printf("A area é %.2f",area);
    return 0;
}
