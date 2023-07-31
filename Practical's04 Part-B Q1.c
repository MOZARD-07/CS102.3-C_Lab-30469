#include <stdio.h>
int main()
{
   //Q1

    for(int num=0; i<=100; num++)
    {
        printf("%d \n",num);
    }


    //  Q2

    int total=0;
    for(int i=0; i<=50; i++);
    {
        printf("Enter the value %d:",i+i);
        int mark;
        scanf("%d ",&mark);
        total=total+mark;
    }
    float avg=total/10;

    printf("Total=%d \n",total);
    printf("Avg=%.2f \n",avg);

    if(avg<50)
    {
        printf("Fail");
    }
    else
    {
        printf("Pass");
    }




}
