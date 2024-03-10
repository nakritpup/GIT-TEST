#include <stdio.h>

int summ(int a,int b){
    return a + b;
}
int sub(int a,int b){
    return a-b;
}
int main()
{
    int a,b;
    printf("Insert number : ");
    scanf("%d %d",&a,&b);
    //scanf("%d",&b);

    printf("The sum of %d and %d is : %d",a,b,summ(a,b));
    printf("The differnt of %d and %d is : %d",a,b,sub(a,b));
    return 0;
}