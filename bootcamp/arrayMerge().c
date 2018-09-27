#include <stdio.h>

#define LIMIT 101

void arrayMerge(int target[], int src1[], int len1, int src2[], int len2) {
    for ( int i = 0, j = 0, k = 0, len3 = len1 + len2; k < len3; k++ ) {
        if ( src1[i] <= src2[j] && i < len1 ) {
            target[k] = src1[i];
            i += 1;
        } else {
            target[k] = src2[j];
            j += 1;
        }
    }
}

int main() {
    int len1 = 5;
    int len2 = 5;
    int len3 = len1 + len2;
    int src1[5] = { 1, 3, 5, 7, 9};
    int src2[5] = { 2, 4, 6, 8, 10};
    int target[len3];

    arrayMerge(target, src1, len1, src2, len2);
    for ( int i = 0; i < len3; i++ ) {
        printf("%d ", target[i]);
    }
    printf("\n");
    
    return 0;
}


/*

Условие задачи
Написать функцию
void arrayMerge(int target[], int src1[], int len1, int src2[], int len2)

Массивы src1[] и src2[] (длиной len1 и len2 соответственно) отсортированы по неубыванию.
Произвести слияние этих массивов в массив target[], также отсортированный по неубыванию.
В случае равенства предпочтение отдаётся элементам из первого массива.
Требуемая сложность: O(N)

*/