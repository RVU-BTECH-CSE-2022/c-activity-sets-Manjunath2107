/*// C program to demonstrate
// addition of complex numbers
#include <stdio.h>

// define a structure for complex number
typedef struct complexNumber {
	int real;
	int img;
} complex;

// complex add(complex x, complex y) function C Program to
// Add Two Complex numbers. This function accepts two
// complex type numbers as parameter as return addition of
// them.
complex add(complex x, complex y);

// driver code
int main()
{

	// define three complex type numbers
	complex a, b, sum;

	// first complex number
	a.real = 2;
	a.img = 3;

	// second complex number
	b.real = 4;
	b.img = 5;

	// print first complex number
	printf("\n a = %d + %di", a.real, a.img);

	// print second complex number
	printf("\n b = %d + %di", b.real, b.img);

	// call add(a,b) function and
	// pass complex numbers a & b
	// as an parameter.
	sum = add(a, b);

	// print result
	printf("\n sum = %d + %di", b.real, b.img);

	return 0;
}

// complex add(complex x, complex y)
// function definition
complex add(complex x, complex y)
{

	// define a new complex number.
	complex add;

	// add real part of a&b
	add.real = x.real + y.real;

	// add Imaginary part of a&b
	add.img = x.img + y.img;

	// return add
	return (add);
}
*/

#include<stdio.h>
struct complex
{
float real;
float imaginary;
};
typedef struct complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a,Complex b,Complex sum);


int main()
{
  Complex a,b, sum;
  a=input_complex();
  b=input_complex();
  sum=add_complex(a,b);
  output(a,b,sum);
  return 0;
}
Complex input_complex()
{
  Complex c1;
  printf("Enter the real part\n");
  scanf("%f",&c1.real);
    printf("Enter the imaginary part\n");
  scanf("%f",&c1.imaginary);
  return c1;
}

Complex add_complex(Complex a, Complex b)
{
  Complex sum;
  sum.real=a.real+b.real;
  sum.imaginary=a.imaginary+b.imaginary;
  return sum;
}

void output(Complex a,Complex b,Complex sum)
{

    printf("The sum of %f+%fi and %f+%fi is %f+%fi\n", a.real, a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary);
}
