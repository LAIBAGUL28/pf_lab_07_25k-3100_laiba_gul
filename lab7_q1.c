#include<stdio.h>
int main(){
	int i,last_element;
int arr[5]={1,2,3,4,5};

for(i =0;i<5;i++)
{ 
 printf("%d",arr[i]);
 }
   printf("\n");
   last_element = arr[4];
   for (i = 4; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last_element;
 printf("IN REVERSE ORDER: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
   
}
