#include <stdio.h>

#define MAX 2

int main() {
    int value;
    
    scanf("%d", &value);
    
    value -= value % MAX;
    
    for ( int i = 0; i < value; i += MAX ) {
        printf("%d ", i);
    }
    printf("%d\n", value);
    
    return 0;
}


/*

Считать с клавиатуры целое положительное число.
Вывести в строку все чётные числа от нуля до указанного числа включительно.

Пример ввода
7
Пример вывода
0 2 4 6

*/