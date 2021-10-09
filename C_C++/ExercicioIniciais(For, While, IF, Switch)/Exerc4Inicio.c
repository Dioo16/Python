
int main(void)
{
    int ns;
    int note;
    int nrr;
    int nra;

    nrr = 0;
    nra = 0;
    ns = 0;

    printf("Input your note, to know your result\n");

    while ( ns !=10 )
    {
        printf("input your note:");
        scanf("%d", &note);


         if (note <= 60){
        printf("reprovado\n");
        nrr = nrr + 1;
        }
        else {
        printf("aprovado\n");
        nra = nra + 1;
        }
        ns = ns+ 1;
    }
    printf(" O número de reprovados é %d\n", nrr);
    printf("O número de aprovados é %d\n", nra);

    if (nra >8){
    printf("Good, wonderful, instructor");
    }


    return 0;


}