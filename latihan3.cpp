#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main ()
{
char str[80] = "hello, ";
//strcpy (str,"ini ");
strcat (str, "adalah ");
strcat (str, "hasil ");
strcat (str, " conncate.");
puts (str);
return 0;
}