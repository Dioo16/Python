int main(void) {

    int nota1, nota2, med;
    printf(" i am does show your average\n");

    printf(" Input your first note: ");
    scanf(" %d", &nota1);

    printf("Input your second note: "); // Atribui a primeira nota, &= indica aonde ela vai ser amarzenada
    scanf(" %d", &nota2);

    med = (nota1 + nota2) /2;
    printf("Your average is %d\n", med); // d, significa decimal, logo verifica-se um inteiro, e % =
    //é tratado pelo scanf e print if como simbolo de conversão

    if (med < 6 ) {  //lê-se ''Se med(média) for menor que 6, faça:....''.
        printf(" oh shit, so dumb, study more"); //Recuar as instruções, boas práticas...
    }

    if (med > 6) { // embora existisse, não se deve atribuir mais de uma funçâo por linha em um programa
        printf(" NICE MAN!!!");
    }
    return 0;
}