#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char firstname[15];
	char lastname[15];

	printf("Enter your first name: ");
	scanf("%s", firstname);
	printf("Enter your last name: ");
	fflush(stdin);
	scanf("%s", lastname);

	strcat(firstname, lastname);
	printf("%s", firstname);
	return 0;
}