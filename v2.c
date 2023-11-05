/*
Koristeći naredbu while za obradu teksta izbaciti svako slovo koje je susedno
prethodno ispisanom slovu (susedna=slova koja se nalaze jedno pored drugog u
ASCII tabeli) iz unetog teksta.
primer: AbDfghjk
rezultat: ADfj
*/
#include <stdio.h>
#include <stdlib.h>

#define razlika ('a'- 'A')
char veliko(char c) {
    if(c>= 'a' && c <= 'z'){
        return c - 'a' + 'A';
    }
    return c;
}

int main() {
    char c;
    char temp = 0;
    while((c = getchar())!= '\n'){
        int raz = (veliko(temp) - razlika) - (veliko(c) - razlika);
        if(raz != -1){
            putchar(c);
        }
        temp = c;
    }
}
