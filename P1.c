#include <stdio.h>
 int main()
{
    printf("\n Arithmatic operation : ");
    
    int a;
    int b;
    
    printf("\n Enter value of a and b");
    scanf("%d ,%d , &a,&b");
    
    printf("\n sum is = %d" , a+b);
    printf("\n subtraction is = %d" , a-b);
    printf("\n multipication is = %d" , a*b);
    printf("\n division is = %d" , a/b);
    printf("\n  modulo is = %d" , a%b);

    return 0;
}
