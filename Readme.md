## My programing in C
- I like C
- I love C

```c
#include <stdio.h>

int summ(int a,int b){
    return a + b;
}
int main()
{
    int a,b;
    printf("Insert number : ");
    scanf("%d %d",&a,&b);
    //scanf("%d",&b);

    printf("The sum of %d and %d is : %d",a,b,summ(a,b));
    return 0;
}
```