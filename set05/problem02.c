#include<stdio.h>

typedef struct camel
{
   float radius;
   float height;
   float length;
} Camel;


void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

int main()
{
     Camel c;
   c=input_camel_details();
   find_weight(&c);
   output(c);
  return 0;
}
void input_camel_details(float *radius, float *height, float *length);
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

float find_weight(float radius, float height, float length);
{
  c->weight = (3.14 * c->stomach_radius^3 * sqrt(c->height * c->length);
}
void output(float radius, float height, float length, float weight)
{
   printf("The weight of the camel is %f", c.camel);
}