#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int first, second;

    fscanf(in, "%d %d", &first, &second);
    fprintf(out, "%d\n", first+second);

    fclose(in);
    fclose(out);

    return 0;
}

/*

Условие задачи
Считать два числа из файла task.in.
Записать их сумму в файл task.out.

Пример ввода
10 20
Пример вывода
30

*/