#include <stdio.h>

int main(int argc, const char* argv[]){
  FILE *fp;
  int c;

  fp = fopen("alphabet.txt","r");
  if(!fp){
    perror("File Input Error");
    return -1;
  }
 
  while((c = fgetc(fp)) != EOF){
    putchar(c);
    printf("\n");
  }

  fclose(fp);

  return 0;
}
