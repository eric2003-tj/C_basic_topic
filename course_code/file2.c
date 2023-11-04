#include <stdio.h>

int main(){
  FILE *in;
  in = fopen("input.txt","r"); // read only
  char str[80];
  while(1){
    if(feof(in)){
      break;
    }
    fscanf(in,"%s",str);
    printf("%s\n",str);
  }
  fclose(in);
}
