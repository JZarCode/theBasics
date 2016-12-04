#include <stdio.h>

int main(int argc, const char* argv[]){
  FILE *fp;
  char line[255];
  

  fp = fopen(argv[1],"r");
  if(!fp){
    perror("Input File Error");
    return -1;
  }

  while(fgets(line, sizeof(line), fp)){
    printf("%s", line);
  }

  fclose(fp);
  return 0;
}
