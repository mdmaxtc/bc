#include <stdio.h>

int main() {
    int a;
    int flag = 0;
    
    scanf("%d", &a);
    
    if ( a % 2 == 0 ) {
        flag = 1;
        printf("alpha\n");
    }
    if ( a % 3 == 0 ) {
        flag = 1;
        printf("bravo\n");
    }
    if ( a % 5 == 0 ) {
        flag = 1;
        printf("charlie\n");
    }
    if ( flag == 0 ) {
        printf("zulu\n");
    }
    
    return 0;
}




/*
Считать с клавиатуры целое число.
- Если число четное, вывести alpha
- Если число кратно трем, вывести bravo
- Если число кратно пяти, вывести charlie
- Если число не кратно ни одному из них, вывести zulu

Пример ввода
8
*/