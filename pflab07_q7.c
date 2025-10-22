#include<stdio.h>
int main()
{  //pf lab 07 question 7
	int num[10];
	int i, j;

    for (i = 0; i < 10; i++)
	 {
        printf("Enter integer ");
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 10; i++)
{
		for (j = i+1; j < 10; j++)
	{
		 if (num[i] == num[j] && num[j] != -1)
		{
                num[j] = -1; 
        }
	}
		
}  
	printf("the updated  array is:");
	for (i = 0; i < 10; i++)
	printf("  %d",num[i]);
    
}
