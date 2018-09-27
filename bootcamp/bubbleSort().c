#include <stdio.h>

void bubbleSort(int array[], int size) {
    int swap;
    for ( int i = 0; i < size - 1; i++ ) {
        for ( int j = 0; j < size - i - 1; j++ ) {
            if (array[j] > array[j+1]) {
                swap = array[j];
                array[j] = array[j+1];
                array[j+1] = swap;
            }
        }
    }
}

int main() {
    int size = 10;
    int array[size];

    for ( i = 0; i < n; i++ ) {
        scanf("%d", &array[i]);
    }

    return 0;
}

/*

Условие задачи
void bubbleSort(int array[], int size)

*/