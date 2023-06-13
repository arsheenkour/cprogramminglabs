//to check whether no. is even or odd
#include<stdio.h>
int main()
{
  //  int a=5; //static input
    //dynamic input
    int a;
    printf("enter the value of a=");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("no. is even");
    }
    else
    {
        printf("no. is odd");
    }
    return 0;
}
