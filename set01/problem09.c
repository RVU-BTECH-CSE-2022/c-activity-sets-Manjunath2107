/*// C program for the above approach
#include <math.h>
#include <stdio.h>

// Function to find the square-root of N
double findSQRT(double N) { return sqrt(N); }

// Driver Code
int main()
{

	// Given number
	int N = 12;

	// Function call
	printf("%f ", findSQRT(N));
	return 0;
}
*/

/*#include <stdio.h>
#include <math.h>

int main()
 
{
    double number, squareRoot;
    
    printf("Enter a number: ");
    scanf("%lf", &number);

    // Calculating the square root using sqrt() function
    squareRoot = sqrt(number);
 
    printf("Square root of %.2lf = %.2lf", number, squareRoot);
 
    return 0;
}
*/
/*#include <stdio.h>
#include <math.h> 

double square_root(double num);

int main()
{
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    printf("Square root of %.2lf = %.2lf", num, square_root(num));
    return 0;
}

double square_root(double num)
{
    return sqrt(num);
}
*/

include <math.h>
#include <stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
int main()
{
  double n ,sqrroot;
  n=input();
  sqrroot=square_root(n);
  output(n, sqrroot);
}  
float input()
{
  double n;
  printf("Enter the number ");
  scanf("%lf",&n);
  return n;
}
float square_root(float n)
{
  double sqrroot=sqrt(n);
  return sqrroot;
}
void output(float n ,float sqrroot)
{
  printf("Square root of %.2lf =  %.2lf",n,sqrroot);
}