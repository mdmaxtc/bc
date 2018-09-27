int gcd(int a, int b) {
    if ( a == 0 ) {
        return b;
    }
    return gcd(b%a, a);
}


/*

Написать функцию, которая находит наибольший общий делитель.
int gcd(int a, int b)

Передаваемые значения больше нуля.

*/