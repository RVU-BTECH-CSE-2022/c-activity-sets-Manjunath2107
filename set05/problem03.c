#include<stdio.h>

struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input();
float find_weight(Camel c);  //pass by value
//or
void find_weight(Camel *c); //passing address variable
void output(Camel c);

int main()
{
     Camel c;
   c=input_camel_details();
   find_weight(&c);
   output(c);
  return 0;
}
Camel input()
{
  Camel c;
  printf("Enter the radius of the camel's stomach");
  scanf("%f",&c.radius);
  printf("Enter the height of the camel's stomach");
  scanf("%f",&c.height);
  printf("Enter the length of the camel's stomach");
  scanf("%f",&c.length);
  return c;
}
float find_weight(Camel c)
{
  c->weight = (3.14 * c->stomach_radius^3 * sqrt(c->height * c->length);
}
void find_weight(Camel *c); 
{
  c=weight= (3.14*stomach_radius^3*sqrt(height*length));
}
void output(Camel c)
{
  printf("The weight of the camel is %f", c.camel);
}