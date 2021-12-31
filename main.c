#include<stdio.h>
int main(){

   int i, j, count, temp, number[25];

   
   scanf("%d",&count);

  
  
   for(i=0;i<count;i++)
      scanf("%d",&number[i]);

   printf("Before Sorting: ");
      for(i=0;i<count;i++)
      printf("%d ",number[i]);

   for(i=1;i<count;i++){
      temp=number[i];
      j=i-1;
      while((temp<number[j])&&(j>=0)){
         number[j+1]=number[j];
         j=j-1;
      }
      number[j+1]=temp;
   }
printf("\n");
  printf("After Sorting: ");
   for(i=0;i<count;i++)
      printf("%d ",number[i]);

   return 0;
}