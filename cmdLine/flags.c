#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[]){
  int opcode;

  if(argc < 2){
    printf("For Testing: include a '-' flag\n");
  }
  
  while((opcode = getopt(argc, argv, "abz")) != -1){
    switch(opcode){
    case 'a': printf("found 'a' flag\n");
      printf("opcode = %d\n", opcode);
      break;
    case 'b': printf("found 'b' flag\n");
      printf("opcode = %d\n", opcode);
      break;
    case 'z': printf("found 'z' flag\n");
      printf("opcode = %d\n", opcode);
      break;
    default:
      perror("illegal flag: use [-abz]");
      return -1;
    }
  }

  return 0;
}
