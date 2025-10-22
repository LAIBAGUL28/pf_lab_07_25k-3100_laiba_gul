#include <stdio.h>

int main()
{//pf lab 07 question 3
    int marks;
    int pass[10];
    int fail[10];
    int i, counter_p = 0, counter_f = 0, sum_p = 0, sum_f = 0;
    float avg_p = 0.0, avg_f = 0.0;

    for (i = 0; i < 10; i++)
    {
        printf("Enter marks of student(0-10) or press -1 to stop: ");
        scanf("%d", &marks);

        if (marks == -1)
        {
            break;
        }

        if (marks >= 5 && marks <= 10)
        {
            pass[counter_p] = marks;
            counter_p++;
            sum_p += marks;
        }
        else if (marks >= 0 && marks < 5)
        {
            fail[counter_f] = marks;
            counter_f++;
            sum_f += marks;
        }
      
    }
    if (counter_p > 0)
        avg_p = (float)sum_p / counter_p;
    if (counter_f > 0)
        avg_f = (float)sum_f / counter_f;
    

    printf("\n\nTotal passing students: %d", counter_p);
    printf("\nTotal failing students: %d", counter_f);
    printf("\nAverage marks of passing students: %.2f", avg_p);
    printf("\nAverage marks of failing students: %.2f\n", avg_f);


}


