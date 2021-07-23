#include <stdio.h>
int strlen1(char *arr)
{
	if(*arr == '\0')
		return 0;
	else
		return 1 + strlen1(arr + 1);
}
int strlen2(char *arr)
{
	int i = 0;
	for(; *arr != '\0'; i++, arr++);
	return i;
}
int strlen3(char *arr)
{
	char *p = arr; // put the first chararcter adresse's of the string in this pointer 
	while (*p != '\0')
	{
		p++;
	}
	return p - arr;
}

int main()
{
	char *arr = "test test test";
	
	printf("%d\n", strlen3(arr));
	return 0;
}