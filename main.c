#include <stdio.h>

int main(){

    double value;
    int result, account;

    scanf("%lf", &value);

    printf("NOTAS:\n");
    account = value/100;
    value = value - (account*100);

    printf("%d nota(s) de R$ 100.00\n", account);

    account = value/50;
    value = value - (account*50);

    printf("%d nota(s) de R$ 50.00\n", account);


    account = value/20;
    value = value - (account*20);

    printf("%d nota(s) de R$ 20.00\n", account);


    account = value/10;
    value = value - (account*10);

    printf("%d nota(s) de R$ 10.00\n", account);

    account = value/5;
    value = value - (account*5);

    printf("%d nota(s) de R$ 5.00\n", account);


    account = value/2;
    value = value - (account*2);

    printf("%d nota(s) de R$ 2.00\n", account);

    printf("MOEDAS:\n");

    result = value*100;
    account = result/100;
    result = result % 100;

    printf("%d moeda(s) de R$ 1.00\n", account);

    account = result/50;
    result = result % 50;

    printf("%d moeda(s) de R$ 0.50\n", account);

    account = result/25;
    result = result % 25;

    printf("%d moeda(s) de R$ 0.25\n", account);

    account = result/10;
    result = result % 10;

    printf("%d moeda(s) de R$ 0.10\n", account);

    account = result/5;
    result = result % 5;
    printf("%d moeda(s) de R$ 0.05\n", account);

    account = result/1;

    printf("%d moeda(s) de R$ 0.01\n", account);

    return 0;


}
