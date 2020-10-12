#include<stdio.h>
int main()
{
	char str[80];
	int i = 0;
	printf("Enter strings : ");
	gets_s(str);
	printf("Caesar Cipher : ");
	while (str[i] != '\0') {
		if (str[i] >= 'a' && str[i] <= 'z')
			printf("%c", ((str[i] - 'a' + 3) % 26) + 'a');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			printf("%c", ((str[i] - 'A' + 3) % 26) + 'A');
		else printf("%c", str[i]);
		i++;
	}
	printf("\n");
	return 0;
}