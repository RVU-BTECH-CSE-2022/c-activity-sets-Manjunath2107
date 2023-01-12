/*#include<stdio.h>
#include<math.h>

int main()
{
  float a, b, c, Perimeter, s, Area;
  
  printf("\nPlease Enter three sides of triangle\n");
  scanf("%f %f %f",&a,&b,&c);
   
  Perimeter = a+b+c;
  s = (a+b+c)/2;
  Area = sqrt(s*(s-a)*(s-b)*(s-c));
   
  printf("\n Perimeter of Traiangle = %.2f\n", Perimeter);
  printf("\n Semi Perimeter of Traiangle = %.2f\n",s);
  printf("\n Area of triangle = %.2f\n",Area);

  return 0;
}
*/
#include<stdio.h>

void input(float *base, float *height);
void find_area(float base,float height,float *area);
void output(float base,float height,float area);

int main()
{
  float base,height,area;
  input(&base, &height);
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
}

void input(float *base, float *height)
{
  printf("Enter the base and height:");
  scanf("%f %f",base,height); 
}

void find_area(float base,float height,float *area){
  *area=(1.0/2.0)*(base*height);
}

void output(float base,float height,float area){
  printf("The area of the triangle with base %f and height %f is %f",base,height,area);
}