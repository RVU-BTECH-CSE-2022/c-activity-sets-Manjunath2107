/*#include <stdio.h>
long addTwoNumbers(long *, long *);
 
int main()
{
   long fno, sno, sum;
   
   printf("\n\n Pointer : Add two numbers using call by reference:\n"); 
   printf("-------------------------------------------------------\n");   
 
   printf(" Input the first number : ");
   scanf("%ld", &fno);
   printf(" Input the second  number : ");
   scanf("%ld", &sno);   
   sum = addTwoNumbers(&fno, &sno);
   printf(" The sum of %ld and %ld  is %ld\n\n", fno, sno, sum);
   return 0;
}cd set01
long addTwoNumbers(long *n1, long *n2) 
{
   long sum;
   sum = *n1 + *n2;
   return sum;
}
*/

/*#include <stdio.h>

void add(int *num1, int *num2) 
{
    int sum;
    sum = *num1 + *num2;
    printf("Sum of the two numbers: %d\n",sum);
}

int main()
{
    int num1,num2;
    printf("Enter the two numbers: \n");
    scanf("%d%d",&num1,&num2);
    add(&num1,&num2);
    return 0;
}
*/

#include<stdio.h>
int main();
void add(int a,int b,int *sum);
void output(int a, int b,int sum);

int input()
{
int n;
printf("Enter number\n");
scanf("%d",&n);
return n;
}

void add(int a,int b, int *sum)
{
  *sum=a+b;
}

void output(int a,int b,int sum)
{
  printf("The sum of %d and %d is %d",a,b,sum);
}
int main()
{
  int a,b,sum;
  a=input();
  b=input();
  add(a,b,&sum);
  output(a,b,sum);
}