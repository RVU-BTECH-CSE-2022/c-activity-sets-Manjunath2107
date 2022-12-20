/*// C program to add two numbers
#include <stdio.h>

int main()
{
	int A, B, sum = 0;

	// Ask user to enter the two numbers
	printf("Enter two numbers A and B : \n");

	// Read two numbers from the user || A = 2, B = 3
	scanf("%d%d", &A, &B);

	// Calculate the addition of A and B
	// using '+' operator
	sum = A + B;

	// Print the sum
	printf("Sum of A and B is: %d", sum);

	return 0;
}
*/
#include <stdio.h>

int add (int a, int b);
int main(void) 
{
    int num1, num2, sum;
  printf("Enter first number: ");
    scanf("%d", &num1);
  printf("Enter second number: ");
    scanf("%d", &num2);
    sum = add(num1, num2);
  printf("Sum of two numbers = %d\n", sum);
    return 0;
}
int add(int a, int b) 
{
    int result;
    result = a + b;
    return result;
}

/*#include<stdio.h>

int input();
int add(int a,int b);
void output(int a,int b,int sum);

int input(){
  int n;
  printf("Enter Number: \n");
  scanf("%d",&n);
  return n;
}
int add(int a, int b){
  return a+b;
}
void output(int a,int b,int sum){
  printf("The sum of %d and %d id %d",a,b,sum);
}
int main()
{
  int a,b,sum;
  a=input();
  b=input();
  sum=add(a,b);
}*/

/*#include <stdio.h>

int input();
int add(int a, int b);
void output(int a, int b, int sum);

int input(){
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    return a, b;
}
int add(int a, int b){
    int sum;
    sum = a + b;
    return sum;
}

void output(int a, int b, int sum){
    printf("The sum of %d and %d is %d \n", a, b, sum);
}
int main(){
    int a, b;
    int sum;
    a, b = input();
    sum = add(a, b);
    output(a, b, sum);
    
    return 0;
}*/