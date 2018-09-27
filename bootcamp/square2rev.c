#include <stdio.h>

int main() {
    int size;
    int reverse;
    
    scanf("%d", &size);
    
    for ( int row = size; row > 0; row-- ) {
        for ( int col = size - 1; col > 0; col-- ) {
            reverse = size * row - col;
            printf("%d ", reverse);
        }
        reverse = size * row;
        printf("%d\n", reverse);
    }
    
    return 0;
}


/*

Вывести числовой квадрат заданного размера.
Выведенные числа начинаются с единицы и постоянно увеличиваются.
В каждой строке числа разделены пробелами.
Порядок строк обратный.
Размер считать с клавиатуры.

Пример ввода
2
Пример вывода
3 4
1 2


*/