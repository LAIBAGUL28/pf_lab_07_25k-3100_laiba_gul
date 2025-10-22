#include<stdio.h>
int main()
{
		//pf lab 7 question 2 
	int i, numsearch, counter=0;
	int num[10];
	for(i=1 ; i<=10 ; i++)
	{
		printf("ENTER  NUMBER: ");
		scanf("%d",&num[i]);
	}
		printf("THE VALUE YOU ENTERED ARE:");
		for(i=1 ; i<=10 ; i++)
		{
			printf("  %d"  ,num[i]);
		}
		printf("\nENTER THE NUMBER YOU  WANTED TO SEARCH: ");
		scanf("%d",&numsearch);	
		
		for(i=1 ; i<=10 ; i++)
		{
			if (numsearch == num[i])
			{
				counter++;
				
			}
	    }
	    	if (counter>0)
	    	{
				printf("\nthe number %d in array is %d times",numsearch,counter);
			}
			else
			{
				printf("\nthe number %d is not found in array",numsearch);
			}
		
}
