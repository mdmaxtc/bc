#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char lowerCase;

    for ( ; fscanf(in, "%c", &lowerCase) > 0; ) {
        if ( lowerCase >= 'A' && lowerCase <= 'Z' ) {
            lowerCase += 'a' - 'A';
        }
        fprintf(out, "%c", lowerCase);
    }
    fprintf(out, "\n");
    fclose(in);
    fclose(out);
    return 0;
}


/*

Условие задачи
В файле task.in дана последовательность символов.
Перевести все буквы в нижний регистр и вывести результирующую последовательность в файл task.out

Пример ввода
ABCD
Пример вывода
abcd

*/