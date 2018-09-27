#include <stdio.h>

int arrayUnique(int array[], int len) {
    int index = 0;
    
    for ( int i = 1; i < len; i++ ) {
        int count = 0;

        for ( int j = 0; j < i; j++ ) {
            if ( array[i] == array[j] ) {
                count += 1;
            }
        }
        if ( count == 0 ) {
            index += 1;
            array[index] = array[i];
        }
    }
    
    return index+1;
}


/*

Условие задачи
Написать функцию:
int arrayUnique(int array[], int size)
Удалить из массива дубликаты элементов. Вернуть новую длину массива.

Примечание: пример ввода и вывода показан для лучшего понимания условия задачи. Выводить результат на печать не нужно.

Пример ввода
1 1 2 2 3 3 4 4 5 5 6 6 7 7 8 8 9 9 10 10 5 4 3 2 1
Пример вывода
array = 1 2 3 4 5 6 7 8 9 10
len = 10

*/