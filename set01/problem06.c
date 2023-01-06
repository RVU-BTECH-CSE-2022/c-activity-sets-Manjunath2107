/*#include <stdio.h>

int main()
{
	int A, B, C;

	printf("Enter the numbers A, B and C: ");
	scanf("%d %d %d", &A, &B, &C);

	if (A >= B && A >= C)
		printf("%d is the largest number.", A);

	if (B >= A && B >= C)
		printf("%d is the largest number.", B);

	if (C >= A && C >= B)
		printf("%d is the largest number.", C);

	return 0;
}
*/
/*#include <stdio.h>
int input();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main()
{
    int a, b, c, largest;
    a = input();
    b = input();
    c = input();
    compare(a, b, c,&largest);
    output(a, b, c, largest);
    return 0;
}

int input()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

void compare(int a, int b, int c,int *largest)
{
    if (a > b && a > c)
    {
        *largest = a;
    }
    else if (b > c)
    {
        *largest = b;
    }
    else
    {
        *largest = c;
    }
}

void output(int a, int b, int c, int largest)
{
    printf("The largest number is %d\n", largest);
}
*/
#include<stdio.h>
int input();
void compare(int a,int b,int c,int *largest);
void output(int a,int b,int c,int largest);

int main()
{
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  compare(a,b,c,&largest);
  output(a,b,c,largest);
  return 0;
}

int input()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);
  return num;
}

void compare(int a,int b,int c,int *largest)
{
  if ((a>b) && (a>c))
  {
    *largest=a;
  }
  if ((b>c) && (b>a))
  {
    *largest=b;
  }
  else
  {
   *largest=c; 
  }
}

void output(int a, int b,int c, int largest)
{
  printf("The largest number is %d",largest);
}