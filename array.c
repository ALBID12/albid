//array declare
//array intialize
#include<stdio.h>
int main()
{
    int sum=0,i,num[5];
    printf("enter numbers");
    for(i=0;i<5;i++){

    scanf("%d",&num[i]);

    }
    for(i=0;i<5;i++)
        {

            sum = sum + num[i];
        }
    printf("%d\n",sum);
    printf("%.2f",sum/5);
    /*num[0] = 10;
    num[1] = 10;
    num[2] = 10;
    num[3] = 10;
    num[4] = 10;*/
    //sum = num[0]+num[1];
    //printf("%d\n",sum);
}
