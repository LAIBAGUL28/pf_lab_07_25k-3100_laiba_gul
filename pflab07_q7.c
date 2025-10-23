#include <stdio.h>

int main()
{// question 7 without nested loop
    int i, j, l;
    int id[10];

    printf("ENTER 10 INTEGERS:\n");
    for (l = 0; l < 10; l++)
    {
        scanf("%d", &id[l]);
    }
    for (i = 0; i < 10; i++)
    {
        if (id[i] == -1)
            continue;

        for (j = i + 1; j < 10; j++)
        {
            if (id[i] == id[j])
            {
                id[j] = -1; 
            }
        }
    }

    
    printf("UPDATED ARRAY:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", id[i]);
    }

    return 0;
}
