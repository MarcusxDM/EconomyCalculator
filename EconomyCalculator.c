#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main(){
    float saldo, gastosSemLanche, gastosComLanche, nseg, nter;
    int exit = 0;
    char resp;

    while(exit == 0){
        printf("############## Economy Calculator 2.0 ##############\n\nSegundas e Quartas:\nPassagem: $9\nLanche: $5(opcional)\nAlmoco: $2,50\n\n");
        printf("Tercas, Quintas e Sextas:\nPassagem: $7\n\n");
        printf("Quantas segundas e quartas?\n");
        scanf("%f", &nseg);
        printf("Quantas tercas, quintas e ?\n");
        scanf("%f", &nter);
        printf("Qual seu saldo?\n");
        scanf("%f", &saldo);

        gastosSemLanche = (nseg+(9+2.5))+(nter*(7));
        gastosComLanche = (nseg*(9+5+7))+(nter*(7));
        printf("\n### SUA ECONOMIA ###\n\nSem lanche: %.2f\nResto: %.2f\n", gastosSemLanche, saldo-gastosSemLanche);
        printf("Com lanche: %.2f\nResto: %.2f\n\n", gastosComLanche, saldo-gastosComLanche);

        printf("Deseja fazer outra operacao?[S] ou [N]\n");
        getchar();
        resp = getchar();
        if (resp == 'S' || resp == 's'){
            exit = 0;
        }
        else if (resp == 'N' || resp == 'n'){
            exit = 1;
        }
        }
    return 0;
}
