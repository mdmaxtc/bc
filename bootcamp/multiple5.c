#include <stdio.h>

#define MACRO 5

int main() {
    int last;
    
    scanf("%d", &last);
    
    last -= last % MACRO;
    
    for ( int i = 0; i < last; i +=  MACRO ) {
        printf("%d ", i);
    }
    printf("%d\n", last);
    
    return 0;
}

/*

Условие задачи
Считать с клавиатуры целое положительное число.
Вывести в строку все числа, кратные 5, от нуля до указанного числа включительно.

Пример ввода
17
Пример вывода
0 5 10 15