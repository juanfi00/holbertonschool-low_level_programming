#include <stdio.h>
#include <string.h>

/* puts will print strings.*/
/*return (0) will end with value 0.*/

int main(){

  char str1[15];
  char str2[15];

  strcpy(str1, "Programming is like building a multilingual puzzle");
  strcpy(str2, " ");

  puts(str1);
  puts(str2);

  return(0);

}
