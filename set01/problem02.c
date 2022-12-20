/*#include<stdio.h>
main()
{
  int a,b,sum;
  printf("Enter two numbers");
  scanf("%d %d",&a,&b);
  printf("Sum");
  sum=a+b;
}
*/
#include<stdio.h>

int main() 
{
    int num1, num2, sum;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("Sum of the numbers = %d", sum);
    
    return 0;
}
