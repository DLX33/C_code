#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<malloc.h>
void str_max(int i, char *a[], int *p)
{
	int n = 0;

	for (; n<i; n++)
	{
		if (strcmp(a[n], a[*p])>0)
			*p = n;
	}
	
	
}

void main()
{
	char *a[100];
	char str[6];
	int i = 0, b = 0;
	for (i = 0;; i++)
	{
		gets(str);
		if (strcmp(str, "*****") == 0)
			break;
		else
		a[i] = (char *)malloc(sizeof(char)*(strlen(str) +1));
		strcpy(a[i],str);

	}
	str_max(i, a, &b);
	printf("%s\n", a[b]);

}
