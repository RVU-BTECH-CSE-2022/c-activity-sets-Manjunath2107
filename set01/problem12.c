
#include<stdio.h>
struct complex
{
float real;
float imaginary;
};
typedef struct complex Complex;

int main()
{
  int n;
  Complex sum=(0,0);
  n=get_n();
  Complex c[n];
  input_n_complex(n, c);
  add_n_complex(n, c);
  output(n, c, result);
}
int get_n();
Complex input_complex();
void input_n_complex(int n,Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n,Complex c[n]);
void output(int n,Complex c[n],Complex result);

int get_n()
{
  int n;
  printf("Enter the sizew of the array\n");
  scanf("%d",&n);
  return n;
}

Complex input_complex()
{
  Complex c;
  printf("Enter the real part\n");
    scanf("%f",&c.real);
  printf("Enter the imaginary part\n");
    scanf("%f", &c.imaginary);
    return c;
}

void input_n_complex(int n,Complex c[n]);
{
  for(int i=0;i<n;i++)
    {
      c[i]=input.complex();
    }
}

Complex add(Complex a, Complex b)
{
  Complex sum=(0,0);
  a.real=a.real+b.real;
  a.imaginary=a.imaginary+b.imaginary;
  return a;
}

Complex add_n_complex(int n,Complex c[n])
{
  Complex sum=(0,0);
  for(int i=0;i<n;i++)
    {
      sum=add(sum, c[i]);
    }
  return sum;
}

void output(int n,Complex c[n],Complex result)
{
  printf("The sum is %f+%i",result.real,result.imaginary);
}

/*#include <stdio.h>
int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum = %d", sum);
    return 0;
}
*/