#include <stdio.h>

int main(int argc, const char* argv[]){
  
  printf("%d\n", argc);
  printf("argument count = %d (including ./executable)\n\n", argc);
  
  for(int i=0; i<argc; i++){
    printf("%s\n", argv[i]);
    printf("Argument %d: %s\n", i, argv[i]);
  }
 
   return 0;
}
