#include<stdio.h>
#include<math.h>
int main()
 {
  int num1,num2,rev=0,last,first,i,count,j,k,l;
  printf("enter the number:");
  scanf("%d",&num2);
  num1=num2;
  printf("enter the no of digits:");
  scanf("%d",&count);
  last=num2%10;
  printf("the last number:%d",last);
   while(num2!=0)
    {
     i=num2%10;
     num2=num2/10;
     rev=rev*10+i;
    }
    printf("\n reversed number=%d",rev);
    while(rev!=0)
    {
        i=rev%10;
        first=i;
       printf("\n the first number is:%d",first);
       goto out;
    }
   out:
   k=first+(last*(pow(10,count-1)));
   l=last+(first*(pow(10,count-1)));
   j=k+num1-l;
   printf("\nthe swapped number is:%d",j);
  return 0;
}
