#include<stdio.h>
#include<string.h>
int main()
{
	/**********begin*********/
	char a[100];
    fgets(a, 99, stdin);
    int len = strlen(a);
    len--;
    a[len] = '\0';
    for(int i = 0; i < len; i++)
    {
        if(a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] -= 32;
            continue;
        }
        if(a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] += 32;
        }
    }
    puts(a);
    return 0;
	/*********end*********/
}
