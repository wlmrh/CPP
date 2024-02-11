#include <bits/stdc++.h>
using namespace std;

int main()
{
	char a[20], buf[99];
	int count = 0;
	scanf("%s", a);
	for(int abc = 111; abc <= 999; abc++)
	{
		for(int de = 11; de <= 99; de++)
		{
			int x = abc * (de % 10), y = abc * (de / 10), z = abc * de;
			sprintf(buf, "%d%d%d%d%d", abc, de, x, y, z);
			int judge = 1;
			for(int i = 0; i < strlen(buf); i++)
			{
				if(strchr(a, buf[i]) == NULL) judge = 0;
			}
			if(judge)
			{
				printf("<%d>\n%5d\n*%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n", ++count, abc, de, x, y, z);
			}
		}
	}
	printf("The number of the solution: %d", count);
	return 0;
}