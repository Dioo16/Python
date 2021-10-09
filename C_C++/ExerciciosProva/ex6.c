#include <stdio.h>

int main()
{
    int hr, min, mint;
    printf("Digite horas e minutos respectivamente, para saber os minutos totais\n");
    scanf("%d %d", &hr, &min);
    hr = hr * 60;
    mint = hr + min;
    printf("O total de minutos é: %d", mint);

    return 0;
}