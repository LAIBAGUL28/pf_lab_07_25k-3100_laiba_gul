#include<stdio.h>
int main()
{  
//pf lab 07 question 6

	char str[100];
    int i;
    int vowel = 0;
    int cons = 0;

    printf("ENTER A WORD: ");
    scanf("%[^\n]", str);  

    for (i = 0; str[i] != '\0'; i++) {
    	if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u')
    	{
    		vowel++;
		}
		else
		{
			cons++;
		}
}
printf("\n the number of vowel in a word is %d",vowel);
printf("\n the number of consonent in a word is %d",cons);
}
