#include <stdio.h>

struct person {
  int age;
  char* name;
};

int main(int argc, char* argv[]){

  struct person a;

  a.age = 22;
  a.name = "Joel"; 

  printf("%s is %d years old\n", a.name, a.age);

  return 0;
}
