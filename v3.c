#include <stdio.h>
#include <stdlib.h>
/*Nacrtati sledeću figuru za unetu visinu n. Primer je za n=5:
<<<<<
->>>-
--<--
->>>-
<<<<<
 */
int main() {
    int n, brojac = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {          //Gornja polovina           //Donja polovina
            if ((j >= i && j < n - i) || (j < i + 1 && j >= n - i - 1))
            {
                if (i % 2 == 0)
                {
                    printf("<");
                }
                else
                {
                    printf(">");
                }
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
    }
}
