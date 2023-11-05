/*
Napisati funkciju pom koja proverava da li argument ima sve cifre manje od 5.
Koristeći tu funkciju, pomnožiti sve parne brojeve u intervalu koji unosi korisnik,
a da zadovoljavaju traženo svojstvo.
*/

#include <stdio.h>
#include <stdlib.h>

int pom(int n){
    int res = 1;
    int temp = 0;
    while(n != 0){
        temp = n % 10;
        if(temp >= 5){
            break;
        }
        else if(temp % 2 == 0){
            res *= temp;

        }
        n/=10;
    }
    return res;
}
int main() {
    int n;
    scanf("%d", &n);
    int res = pom(n);
    printf("%d", res);
}
