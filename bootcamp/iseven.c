#include <stdio.h>

int main() {
    int a;
    
    scanf("%d", &a);
    
    if ( a % 2 == 0 ) {
        printf("yes\n");
    } else { 
        printf("no\n");
    }
    
    return 0;
} 


/*

Считать с клавиатуры целое число.
Если число чётное, вывести на экран yes, в противном случае вывести no.

Пример ввода
17
Пример вывода
no
*/