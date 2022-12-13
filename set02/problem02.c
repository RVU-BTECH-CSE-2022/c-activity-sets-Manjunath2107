#include<stdio.h>

int main()
{
	int side1, side2, side3;
 
  	printf("\n Please Enter Three Sides of a Triangle : ");
  	scanf("%d%d%d", &side1, &side2, &side3);
  	
  	if(side1 == side2 && side2 == side3)
  	{
  		printf("\n This is an Equilateral Triangle");
 	  }
 	else if(side1 == side2 || side2 == side3 || side1 == side3)
 	  {
 		printf("\n This is an Isosceles Triangle");
	  }
	else
	  {
		printf("\n This is a Scalene Triangle");
	  }  
 	return 0;
}

/*int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int input_side()
{
  printf("\n Enter the three sides of a triangle": );
  scanf("%d %d %d",&side1, &side2, &side3)
}

int check_scalene(int a, int b,int c)
{
  if(side1 == side2 && side2==side3)
  {
    printf("\n this is an equilateral triangle");
  }
  else if (side1 == side2 || side2 == side3 || side1==side3)
  {
    printf("This is an isosceles triangle")
  }
  else
  {
    printf("\this is a scelene");
  }
}

void output(int a, int b, int c, int isscalene)
{
  
}*/

/*#include<stdio.h>
void scalene(int a, int b, int c);

int main(){

	float a, b, c;
	
	printf("Enter the length of the three sides of the triangle: \n");
	scanf("%f %f %f", &a, &b, &c);

	scalene(a, b, c);
	
	return 0;
}
void scalene(float x, float y, float z){

	if(x != y && y != z && z != x){
		printf("The triangle is scalene.\n");
	} else {
		printf("The triangle is not scalene.\n");
	}
}
*/