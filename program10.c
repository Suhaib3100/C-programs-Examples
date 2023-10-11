/*Write a C program  if a to check if a person is valid for voting if he is above
18 and he can be a candidate if he/she is 25 or above and if he/she is less than 18
not eligible fo r anythung*/

#include<stdio.h>
int main()
{
    int age;
    printf("enter the age=");
    scanf("%d",&age);
    if(age>=25)
    {
        printf("person is eligible for voting and to be candidate");

    }
     else if(age>=18){
    printf("person is eligible for voting");


}
else if (age<18){
        printf("person is not eligible for voting");
}

return 0;





}
