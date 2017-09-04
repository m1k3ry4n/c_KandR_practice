#include <stdio.h>

#define MAXLINE 1000     /* maximum input line size */
#define NUM_SPACES 5     /* number of spaces per tab */

char line[MAXLINE];      /* current input line */
void getLine(char line[]);
void copy(void);

/* replace tabs with spaces */
int main(void){

  int len;
  
  getLine(line);
    
  printf("%s", line);

  return 0;
}

/* getLine: specialized version */
void getLine(char line[]){
  char c;
  int i;
  int j;

  for (i = 0; i < MAXLINE-1 && (c=getchar()) != EOF && c != '\n'; ++i)
    if (c == '\t'){
      for (j = 0; j < NUM_SPACES; ++j){
	line[i] = ' ';
	if (j != NUM_SPACES-1)
	  ++i;
      }
    } else {
      line[i] = c;
    }
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
}


