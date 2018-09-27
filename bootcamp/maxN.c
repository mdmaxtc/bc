#include <stdio.h>

int main() {
    int quantity, max, current;
    
    scanf("%d%d", &quantity, &max);
    
    for ( int i = 1; i < quantity; i++ ) {
        scanf("%d", &current);
        if ( current > max ) {
            max = current;
        }
    }
    printf("%d\n", max);
    
    return 0;
}

/*

Считать с клавиатуры целое положительное число - количество чисел в последовательности.
Затем считать с клавиатуры заданное количество чисел и вывести наибольшее из них.

Пример ввода
5
1 2 3 4 5
Пример вывода
5

*/