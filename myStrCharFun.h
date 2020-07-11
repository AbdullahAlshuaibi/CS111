#include <iostream>
using namespace std;

void myStrcpy(char dest[], const char source[])
{
  int i=0;
  for(i=0; source[i] != '\0'; i++)
    {
      dest[i]= source[i];
    }
  dest[i]= '\0';
}

char myToUpper(char ch)
{
  char uppercase;

  if(ch>=97&&ch<=122)
    {
      uppercase = int(ch) - 32;
      ch = (char)uppercase;
    }

  return ch;
}

int myStrlen(const char cstr[])
{
  int i;

  for(i=0; cstr[i]!='\0'; i++)
    ;

  return i;
}

