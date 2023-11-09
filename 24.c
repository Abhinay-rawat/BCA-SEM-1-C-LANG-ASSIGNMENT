#include <stdio.h>

int main()
{

    int n, m;

    printf("Enter a value for n: ");
    scanf("%d", &n);

    printf("Enter a value for m: ");
    scanf("%d", &m);

    printf("Natural numbers from 1 to %d: ", n);
    int i = 1;
    while (i <= n)
    {
        printf("%d ", i);
        i++;
    }

    printf("\nReverse counting from %d to 1: ", m);
    while (m >= 1)
    {
        printf("%d ", m);
        m--;
    }

    printf("\n");

    return 0;
}
