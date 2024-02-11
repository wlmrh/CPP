#include <stdio.h>

int main()
{
    int a, b, c, max;
    scanf("%d%d%d", &a, &b, &c);
    if(a >= b && a >= c)
    {
        max = a;
    }
    else
    {
        if(b >= c && b >= a)
        {
            max = b;
        }
        else
        {
            max = c;
        }
    }
    printf("%d", max);
    return 0;
}