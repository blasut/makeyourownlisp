#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>

int main(int argc, char** argv) {

  /* Print version and exit information */
  puts("Lispy Version 0.0.0.1");
  puts("Press ctrl+c to exit\n"); 

  /* In a never ending loop */
  while (1) {

    /* output our prompt */
    char* input = readline("lispy> ");

    add_history(input);

    /* Echo input back to user */
    printf("No you're a %s\n", input);

    free(input);
  }
  return 0;
}
