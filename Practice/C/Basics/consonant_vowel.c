#include<stdio.h>

void main()
{
	printf("Enter the alphabet: ");
	char alpha;
	scanf("%c", &alpha);
	printf("You entered: %c\n", alpha);
	if((alpha >= 'A' && alpha <= 'Z') || (alpha >= 'a' && alpha<= 'z'))
	{
		switch (alpha)
		{
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U': printf("It is VOWEL\n");
				  break;
			default : printf("It is Consonant\n");
		}
	}
	else
	{
		printf("Wrong input provided\n");
	}
}
