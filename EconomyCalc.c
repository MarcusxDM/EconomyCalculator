#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main(){
    int saldo, gastosSemLanche, gastosComLanche, nseg, nter, exit = 0;
    char resp;

    while(exit == 0){
        printf("############## Economy Calculator 1.0 ##############\n\nSegundas e Quartas:\nPassagem: $8\nLanche: $7(opcional)\n\n");
        printf("Tercas e Quintas:\nPassagem: $8\nLanche: $7(opcional)\nAlmoco: $10\n\n");
        printf("Quantas segundas e quartas?\n");
        scanf("%d", &nseg);
        printf("Quantas tercas e quintas?\n");
        scanf("%d", &nter);
        printf("Qual seu saldo?\n");
        scanf("%d", &saldo);

        gastosSemLanche = (nseg*8)+nter*(8+10);
        gastosComLanche = (nseg*(8+7))+(nter*(8+7+10));
        printf("\n### SUA ECONOMIA ###\n\nSem lanche: %d\nResto: %d\n", gastosSemLanche, saldo-gastosSemLanche);
        printf("Com lanche: %d\nResto: %d\n\n", gastosComLanche, saldo-gastosComLanche);

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
