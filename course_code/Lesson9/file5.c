#include <stdio.h>

int main(){
  FILE *in;
  FILE *out;
  in = fopen("input.txt","r"); // read only
  char str[80];
  char str2[80];
  int num;
  out = fopen("out.txt","w");
  while(1){
    fscanf(in,"%s %s %d",str,str2,&num);
    if(feof(in)){
      break;
    }
    fprintf(out,"%s %s %d\n",str,str2,num);
    fflush(out);
  }
  fclose(in);
  fclose(out);
}
