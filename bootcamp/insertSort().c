#include <stdio.h>

#define SIZE 5

void insertSort(int array[], int size) {
    for ( int i = 1; i < size; i++ ) {
        int temp = array[i];
        
        for ( int j = i - 1; j >= 0 && temp < array[j]; j-- ) {
            array[j+1] = array[j];
            array[j] = temp;
        }
    }
}

int main() {
    int array[] = { 1, 0, 2, 4, 3 };
    
    for ( int i = 0; i < SIZE; i++ ) {
        printf("%d ", array[i]);    
    }
    printf("\n");

    insertSort(array, SIZE);

    for ( int i = 0; i < SIZE; i++ ) {
        printf("%d ", array[i]);    
    }
    printf("\n");

    return 0;
}
 /*

Условие задачи
void insertSort(int array[], int len)

 */