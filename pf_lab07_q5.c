#include <stdio.h>

int main()
{
	//pf lab 7 question 5
	
    int i, max, min, diff;
    int num[10];

    for (i = 0; i < 10; i++) {
        printf("Enter integer ");
        scanf("%d", &num[i]);

        if (i == 0) 
		{
            max = num[i];
            min = num[i];
        } else 
		{
            if (num[i] > max)
                max = num[i];
            if (num[i] < min)
                min = num[i];
        }
    }

    diff = max - min;
    printf("\nThe difference between max and min is: %d\n", diff);
}

