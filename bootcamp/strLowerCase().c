void strLowerCase(char str[]) {
    for ( char *index = str; *index > 0; index++ ) {
        if ( *index >= 'A' && *index <= 'Z' ) {
            *index -= 'A' - 'a';
        }
    }
}

/*

Условие задачи
void strLowerCase(char str[])

*/