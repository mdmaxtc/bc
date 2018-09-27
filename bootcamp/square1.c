#include <stdio.h>

int main() {
    int size;
    
    scanf("%d", &size);
    
    for ( int row = 1; row <= size; row++ ) {
        for ( int col = 1; col < size; col++ ) {
            printf("%d ", col);
        }
        printf("%d\n", size);
    }
    
    return 0;
}


/*

Вывести числовой квадрат заданного размера.
В каждой строке числа идут с единицы через пробел.
Размер считать с клавиатуры.

Пример ввода
2
Пример вывода
1 2
1 2

*/