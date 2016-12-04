#include <stdio.h>
#include <stdlib.h> //atoi

int main(int argc, char* argv[]){
  int tmp[argc];
  int acc=0;

  for(int i=1; i<argc; i++){
    tmp[i-1] = atoi(argv[i]);
  }

  for(int i=0; i<argc-1; i++){
    acc += tmp[i];
  }

  printf("total sum of Int args = %d\n", acc);

  return 0;
}
