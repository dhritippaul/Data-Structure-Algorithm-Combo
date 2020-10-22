#include<stdio.h>
#include<stdlib.h>

void swap(int *x,int*y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main(){

   int count, temp, i, j;
   int *arr; //array pointer
   printf("How many numbers are u going to enter?: ");
   scanf("%d",&count);
   arr = (int*)malloc(count*sizeof(int)); //dynamic allocation
   printf("Enter %d numbers: ",count);
   for(i=0;i<count;i++)
   	scanf("%d",(arr+i));

   for(i=0;i<count;i++){
      for(j=0;j<count-i-1;j++){
        if(*(arr+j)>*(arr+j+1)){
        	swap((arr+j),(arr+j+1)); //swap function
        }
      }
   }

   printf("Sorted elements: ");
   printf("{");
   for(i=0;i<count;i++) //printing array
      printf(" %d",*(arr+i));
   printf(" }");
   return 0;
}
