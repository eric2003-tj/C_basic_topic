#include <stdio.h>

int main(){
  FILE *in;
  in = fopen("input.txt","r"); // read only
  char str[80];
  char str2[80];
  int num;
  while(1){
    fscanf(in,"%s %s %d",str,str2,&num);
    if(feof(in)){
      break;
    }
    printf("%s %s %d\n",str,str2,num);
  }
  fclose(in);
}
