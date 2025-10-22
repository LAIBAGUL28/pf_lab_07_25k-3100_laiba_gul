#include <stdio.h>

int main() {
	//pf lab 07 question 4
    char str[100];
    int i;

    printf("ENTER A SENTENCE: ");
    scanf("%[^\n]", str);  

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
		 {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            
            str[i] = str[i] + 32;
        }
    }

    printf("CONVERTED MESSAGE: %s\n", str);

    
}
