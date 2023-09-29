/*
* Thu, 16 Dec - 2022
* Author : Melaku Negussie (Telegram - @Anonymous_M21)
*/
#include <stdio.h> // for printf() routine

int main(void) {
    int i, j;
    long double fact = 1;
    // check if the entered value is -ve number and re-entering the value
    do {
        printf("number to be factorilized : ");
        scanf("%i", &i);
        j = i;
        if(i < 0) printf("only positive value! enter again.\n");
    } while (i < 0);
    // 0 and 1 factorial is 1 as a rule
    if(i == 0 || i == 1) {
        printf("%i! = 1\n", i);
        return 0;
    }
    // calculate the factorial
    for(; i >= 1; --i) {
        fact *= i;
    }
    printf("%i! = %.9Lg\n", j, fact);
    return 0;
}
