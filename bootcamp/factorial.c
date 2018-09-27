#include <stdio.h>

int main() {
    int integer;
    int result = 1;
    
    scanf("%d", &integer);
    
    if ( integer < 0 ) {
        result = -1;
    } else {
        for ( int i = 1; i <= integer; i++ ) {
            result *= i;
        }
    }
    
    printf("%d\n", result);
    
    return 0;
}

/*
Условие задачи

Вычислить и вывести факториал считанного с клавиатуры целого числа.
В случае неопределенности ответа вывести -1.
Для решения пользоваться циклами.

Пример ввода
5
Пример вывода
120

*/