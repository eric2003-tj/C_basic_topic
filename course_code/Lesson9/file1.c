#include <stdio.h>

int main(){
  FILE *in;
  in = fopen("input.txt","r"); // read only
  fclose(in);
}
