#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter 3 integer: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("a=%d b=%d c=%d", a, b, c);

    printf("%d", a + b + c);
}