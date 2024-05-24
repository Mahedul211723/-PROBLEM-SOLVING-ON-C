#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    int num, rev, a, b, c, d, e, f;
    printf("Input number: ");
    scanf("%d", &num); //1234
    a = num/1000; //1
    b = num % 1000; //234
    c = b/100; //2
    d = b%100; //34
    e = d / 10; //3
    f = d%10; //4
    rev = (1000 * f) + (100 * e) + (10 * c) + a;
    printf("\nReversed: %d", rev);

    getch();
    return 0;
}
