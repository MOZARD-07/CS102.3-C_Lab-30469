#include <stdio.h>
int main()
{
    /*//Quation NO 01

    //Using While
    int num=0;

    while(num<=100)
    {
        printf("%d ",num);
        num++;
    }

    //Using Do while
    int num=0;

    do
    {
        printf("%d",num);
        num++;
    }
    while(num<=100);

    //Using For

    for(int num=0;num<=100;num++);
    {
        printf("%d",num);
    }

    //Quation NO 02

    int marks[10],total=0;

    printf("Enter 10 marks: \n");

    for(int i=0;i<10;i++);
    {
        scanf("%d",&marks[i]);
        total+=marks[i];
    }
    float avg=(float)total/10;

    printf("Total: %d\n",total);
    printf("Average: %.2f\n",avg);

    if(avg<50)
    {
        printf("Fail! \n");
    }
    else
    {
        printf("Pass! \n");
    }

    //Quation NO 03

    int num,factorial=1;

    printf("Enter a number: ");
    scanf("%d",&number);

    if(num<0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        for(int i=1;i<=num;i++)
        {
            factorial*=i;
        }
        printf("Factorial of %d is %d\n",num,factorial);
    }

    //Quation No 04

    int num,sum=0,remainder;

    printf("Enter a number: ");
    scanf("%d",&number);

    while(num>0)
    {
        remainder=number%10;
        sum+=remainder;
        num/=10;
    }
    printf("Sum of digits: %d\n",sum);

    //Quation NO 05

    int num,reversednumber=0,remainder;

    printf("Enter a number: ");
    scanf("%d",&number);

    do
    {
        remainder=num%10;
        reversednumber*10+remainder;
        number=number/10;
    }
    while(num!=0);

    printf("Reversed number: %d\n",reversednumber);

    //Quation NO 06

    int i,base,exponent,result=1;

    printf("Enter the base: ");
    scanf("%d",&base);

    printf("Enter the exponent: ");
    scanf("%d",&exponent);

    for(i=0;i<exponent;i++)
    {
        result*=base;
    }
    printf("%d raised to the power %d is: %d\n",base,exponent,result);*/

                           //Section  B

  /*
    //Question NO 01

    int num[10],i,positivecount=0,negativecount=0,zerocount=0;

    printf("Enter 10 numbers: ");

    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<10;i++)
    {
        if(num[i]>0)
        {
            positivecount++;
        }
        else if (num[i]<0)
        {
            negativecount++;
        }
        else
        {
            zerocount++;
        }
    }
    printf("Positive numbers: %d\n",positivecount);
    printf("Negative numbers: %d\n",negativecount);
    printf("Zeros: %d\n",zerocount);*/

    //Question NO 02

 /*9   int marks[10],i,totalmarks=0,maxmarks,minmarks;

    printf("Enter marks of 10 students: \n");

    for(i=0;i<10;i++)
    {
        scanf("%d",&marks[i]);
        totalmarks+=marks[i];

        if(i==0)
        {
            maxmarks=marks[i];
            minmarks=marks[i];
        }
        else
        {
            if(marks[i]>maxmarks)
            {
                maxmarks=marks[i];
            }
            if(marks[i]<minmarks)
            {
                minmarks=marks[i];
            }
        }
    }
    double averagemarks=(double)totalmarks/10;

    printf("Maximum Marks: %d\n",maxmarks);
    printf("Minimum Marks: %d\n",minmarks);
    printf("Average Marks: %.2f\n",averagemarks);*/

    //Question NO 03

    int i,count=0;
    double prices[10],total=0.0];

    printf("Enter prices of 10 items: \n");

    for(i=0;i<10;i++);
    {
        scanf("%lf",prices[i]);
        total+=prices[i];

        if(prices[i])>200
        {
            count++;
        }
    }
    double average=total/10;

    printf("Average value of an item: %.2lf\n",average);
    printf("Number of items with price>200: %d\n",count);


    //Question NO 04


    int employeeno,count=0,
    double basicsalary;

    printf("Enter employee number and basic salary: \n");

    while(1)
    {
        sacnf("%d",&employeeno);

        if(employeeno==-999)
        {
            break;
        }
        scanf("%lf",&basicsalary);

        if(basicsalary>=5000)
        {
            count++;
        }
    }

    printf("Number of employees with a basic salary>=5000: %d\n",count);
}

