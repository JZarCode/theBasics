#include <stdio.h>

int main(int argc, const char* argv[]){
 
  printf("argument count = %d (including ./executable)\n\n", argc);

  for(int i=0; i<argc; i++){
    printf("Argument %d: %s\n", i, argv[i]);
  }

  return 0;
}
