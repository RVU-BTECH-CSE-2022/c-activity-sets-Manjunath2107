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