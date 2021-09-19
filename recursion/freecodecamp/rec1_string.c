/****************************************************************
*
* File name     : rec1_string.c
* Author        : Linda J N
* Creation date : Saturday 18 September 2021 09:17:37 PM
* Purpose       :
*
****************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define printfs(...) printf("%s", __VA_ARGS__)
#define printfd(...) printf("%d", __VA_ARGS__)
#define printfc(...) printf("%c", __VA_ARGS__)
#define printl printf("\n")

/* Function to print reverse of the passed string */
void reverse(char *str)
{
   if (*str != '\0')
   {
       reverse(str+1);
       printfc(*str);
   }
}

char* rev(char in[]) {
  int n = strlen(in);

  for(unsigned int i = 0; i < n/2; i++)
    in[i] = in[n - i - 1];
  return in;
}

int main(int argc, char *argv[]) {
  reverse("abc"); printl;
  return 0;
}
