#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char upperCase;
    
    for ( ; fscanf(in, "%c", &upperCase) > 0; ) {
        if ( upperCase >= 'a' && upperCase <= 'z' ) {
            upperCase += 'A' - 'a';
        }
        fprintf(out, "%c", upperCase);
    }
    fclose(in);
    fprintf(out, "\n");
    fclose(out);

    return 0;
}








/*

Условие задачи
В файле task.in дана последовательность символов.
Перевести все буквы в верхний регистр и вывести результирующую последовательность в файл task.out

Пример ввода
abcd
Пример вывода
ABCD

*/