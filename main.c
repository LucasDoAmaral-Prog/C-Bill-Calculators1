#include <stdio.h>

int main() {

    int account, value, key, remember;

    scanf("%d", &value);

    printf("%d\n", value);

    remember = value;

    key = remember/100;
    remember = remember - (key*100);

    printf("%d nota(s) de R$ 100,00\n", key);

    key = remember/50;
    remember = remember - (key*50);
    printf("%d nota(s) de R$ 50,00\n", key);
    key = remember/20;
    remember = remember - (key*20);

    printf("%d nota(s) de R$ 20,00\n", key);

    key = remember/10;
    remember = remember - (key*10);

    printf("%d nota(s) de R$ 10,00\n", key);

    key = remember/5;
    remember = remember - (key*5);

    printf("%d nota(s) de R$ 5,00\n", key);

    key = remember/2;
    remember = remember - (key*2);

    printf("%d nota(s) de R$ 2,00\n", key);

    key = remember/1;
    remember = remember - (key*1);

    printf("%d nota(s) de R$ 1,00\n", key);

    return 0;


}
