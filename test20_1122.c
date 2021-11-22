#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void main()
{
	char arr[2][100];
	int i = 0, c;
	for (; i < 2; i++)
		gets(arr[i]);
	for (i = 0; i<100; i++)
	{
		if (arr[0][i]>arr[1][i])
		{
			c = arr[0][i] - arr[1][i];
			printf("%d\n", c);
			break;
		}
		if (arr[0][i]<arr[1][i])
		{
			c = arr[1][i] - arr[0][i];
			printf("-%d\n", c);
			break;
		}
		if ((arr[0][i] == arr[1][i]) && (arr[0][i] == '\0'&&arr[1][i] == '\0'))
		{
			c = 0;
			printf("%d\n", c);
			break;
		}
	}
	system("pause");


}
