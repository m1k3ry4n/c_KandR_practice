#include <stdio.h>
#include <math.h>

#define MAXLINE 1000     /* maximum input line size */
#define NUM_SPACES 5     /* number of spaces per tab */

char hexLine[MAXLINE];      /* current input line */
int htoi(char hexLine[]);

/* replace tabs with spaces */
int main(void){
  
  int intLine;
  intLine = htoi(hexLine);
    
  printf("%d", intLine);

  return 0;
}

/* getLine: specialized version */
int htoi(char line[]){
  char c;
  int i;
  int j;
  int total = 0;

  // loop through line to determine its length
  // loop through again using the length to determine the power of 16 to use
  // length - i - 1 = power

  for (i = 0; i < MAXLINE-1 && (c=getchar()) != EOF && c != '\n'; ++i) {} // increments i to the length of the input


  for (j = 0; j < i; ++j){
	int hVal; // use
	// total = total + (
  }

  return total;
}


