#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	int i, j;
	char str_arr[5][20], str[20];
	for (i = 0; i < 5; i++)
	{
		printf("\nEnter string %d: ", i + 1);
		scanf("%s", str_arr[i]);
	} 
	return 0;
}