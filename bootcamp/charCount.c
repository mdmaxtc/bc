#include <stdio.h>

#define LIMIT 101


int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char str[LIMIT];
    int len = 0;

    fscanf(in, "%s", str);
    fclose(in);

    for ( int i = 0; str[i] != 0; i++ ) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            len += 1;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] -= 'A' - 'a';
            len += 1;
        }
    }
    for ( int i = 0; i < len; i++ ) {
        int count = 1;

        if ( str[i] == str[i+1] ) {
            count += 1;
            i += 1;
            fprintf(out, "%c %d\n", str[i], count);
        } else {
            fprintf(out, "%c %d\n", str[i], count);
        }
    }

    fclose(out);

    return 0;
}



/*

Условие задачи
В файле task.in задана последовательность символов.
Вывести в task.out количество вхождений латинских букв, которые встречаются в последовательности.
Большие буквы считать как маленькие.
Пример ввода
Hello!
Пример вывода
e 1
h 1
l 2
o 1

*/