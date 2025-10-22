#include<stdio.h>
int main()
{
	char str[100] ;
	
	printf("enter a string (only non_alphabetic character will be stored): ");
	scanf("%[^A-Za-z]",str);
	
	printf("\nyou entered non_alphabetic character: %s",str);
		
	 return 0;
}
