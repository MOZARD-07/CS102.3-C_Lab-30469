#include <stdio.h>
int main()
{
 int num1,num2,num3,largest,smallest;

 printf("Enter Three Number \n");
 scanf("%d %d %d",&num1,&num2,&num3);

    if(num1>num2)
    {
       if(num1>num3)
         largest = num1;
       else
         largest = num3;
    }
    else
    {
       if(num2>num3)
         largest = num2;
       else
         largest = num3;
    }

    if(num1<num2)
    {
       if(num1<num3)
         smallest = num1;
       else
         smallest = num3;
    }
    else
    {
       if(num2<num3)
         smallest = num2;
       else
         smallest = num3;
    }

    printf("%d is largest number \n",largest);
    printf("%d is smallest number \n",smallest);
}
