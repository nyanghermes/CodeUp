#include <stdio.h>
int main(void)
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n%d\n%d\n%d\n%d\n%.2f\n",a+b,a-b,a*b,a/b,a%b,(float)a/b);
    return 0;
}