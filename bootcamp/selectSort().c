#include <stdio.h>

#define SIZE 5

void selectSort(int array[], int size) {
    int min;
    int temp;
    
    for ( int i = 0; i < size; i++ ) {
        min = array[i];
        for ( int j = i + 1; j < size; j++ ) {
            if ( min > array[j] ) {
                temp = min;
                min = array[j];
                array[j] = temp;
            }
        }
        array[i] = min;
    }
}

// void selectSort(int array[], int size) {
//     for ( int i = size - 1; i > 0; i-- ) {
//         int max = array[i];
//         int index = i;
        
//         for ( int j = 0; j < i; j++ ) {
//             if ( array[j] > max ) {
//                 max = array[j];
//                 index = j;
//             }
//         }
//         array[index] = array[i];
//         array[i] = max;
//     }
// }

int main() {
    int array[SIZE] = { 1, 5, 2, 4, 3 };
    
    for ( int i = 0; i < SIZE; i++ ) {
        printf("%d ", array[i]);    
    }
    printf("\n");

    selectSort(array, SIZE);

    for ( int i = 0; i < SIZE; i++ ) {
        printf("%d ", array[i]);    
    }
    printf("\n");

    return 0;
}


/*

Условие задачи
void selectSort(int array[], int size)

*/