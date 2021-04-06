#include<stdio.h>
#include<math.h>
int main()
 {
  int num1,num2,rev=0,last,first,i,count,j,k,l;
  printf("enter the number:");
  scanf("%d",&num2);
  num1=num2; //creating a temporary variable and storing the contents of num2 in num1
  last=num2%10;  //last digit of the number is found using modulo operation
  printf("the last number:%d",last);
   while(num2!=0)
    {
     i=num2%10;
     num2=num2/10;
     rev=rev*10+i; //the number is reversed 
    count=count+1; //to find the number of digits in the given number
    }
    printf("\n reversed number=%d",rev);
    while(rev!=0)
    {
        i=rev%10;
        first=i; //the first number is obtained by performing the modulo operation in the reversed number
       printf("\n the first number is:%d",first);
       goto out;
    }
   out:
   k=first+(last*(pow(10,count-1)));  //here the last number is multiplied with the 10 power number of digits minus 1 
   l=last+(first*(pow(10,count-1)));  //here the same method is followed but we are adding last number to the first number multiplied with the 10 power number of digits minus 1 
   j=k+num1-l;
   printf("\nthe swapped number is:%d",j);
  return 0;
}
