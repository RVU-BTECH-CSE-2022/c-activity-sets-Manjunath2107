#include<stdio.h>

void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
  void output(char *string1, char *string2, int result);

void input_two_strings(char *string1, char *string2)
  {
  printf("Enter the first string\n");
    scanf("%s", string1);
     printf("Enter the second string\n");
    scanf("%s", string2);
  }

int stringcompare(char *string1, char *string2)
  {
    int result=0, i=0, flag=0;
    for(i=0;string1[i]!='\0' && string2[i]!='\0';i++)
      {
        if(string1[i]!=string2[i])
        {
          flag=1;
          break;
        }
      }
  
  if (flag==0)
  {
    if(string1[i]=='\0 ' && string2[i]=='\0')
      return 0;
    if (string1[i]=='\0')
      return 1;
    if (string2[i]=='\0')
      return 2;
  }

if (flag==1)
{
  if (string1[i]>string2[i])
    return 1;
  else return 2;
}
  }
void output(char *string1, char *string2, int result)
  {
    if (result==0)
      printf("The strings are same or equal\n");
        if(result==1)
      printf("%s is greater\n",string1);
        if(result==2)
      printf("%s is greater\n",string2);
  }

  int main()
  {
     char string1[100],string2[100];
    int result=0;
    input_two_strings(string1, string2);
    result=stringcompare(string1, string2);
    output(string1,string2,result);
  }
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50], str2[50];
    int i, n, flag = 0;

    //Input two strings from user
    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("\nEnter the second string: ");
    scanf("%s", str2);

    //Calculate the length of the strings
    n = strlen(str1);

    //Compare the strings character by character
    for(i=0; i<n; i++)
    {
        if(str1[i] != str2[i])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("\nStrings are equal.\n");
    else
        printf("\nStrings are not equal.\n");

    return 0;
}
*/
