/* If age of a person is 18 or above he is valid for Driving licence
and if age is less than 18 he is not valid for driving licence*/

#include<stdio.h>
int main()
{
    int age;
    scanf("%d",&age);
    if(age>=18)
    {
        printf("person is valid for driving license");

    }
    else
    {
        printf("person is not valid for driving license");
    }

    return 0;




}



