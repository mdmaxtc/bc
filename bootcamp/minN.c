#include <stdio.h>

int main() {
    int quantity, min, current;
    
    scanf("%d%d", &quantity, &min);

    for ( int i = 1; i < quantity; i++ ) {
        scanf("%d", &current);
        if ( current < min ) {
            min = current;
        }
    }
    printf("%d\n", min);
    
    return 0;
}

/*

Считать с клавиатуры целое положительное число - количество чисел в последовательности.
Затем считать с клавиатуры заданное количество чисел и вывести наименьшее из них.
Данная задача решается без массивов.

Пример ввода
5
1 2 3 4 5
Пример вывода
1

*/