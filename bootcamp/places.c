#include <stdio.h>

int main() {
    int count;
    int total = 0;
    
    scanf("%d", &count);
    if ( count <= 0 ) {
        total += 1;
    }
    for ( int i = count; i != 0; i /= 10 ) {
        total += 1;
    }
    printf("%d\n", total);

    return 0;
}




/*

Условие задачи
Считать с клавиатуры целое число.
Вывести на экран количество знакомест, нужных для вывода этого числа.

Пример ввода
123
Пример вывода
3

*/