#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main (void) 
{

bool StartOrNot = true;

char initials[3];

int counter = 0;

string name = GetString();

for (int i = 0; name[i] != '\0'; i++)
{
   
   if (StartOrNot == true)
   
   initials[counter] = toupper(name[i]);
  
   if (name[i] == ' ') {
       
        StartOrNot = true;
        ++counter;
   }
   else
        StartOrNot = false;
}
printf ("%s\n", initials);
}
