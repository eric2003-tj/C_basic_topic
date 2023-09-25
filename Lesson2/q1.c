#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t)
  for(int i = 2;i*i<=t;i++){
    if(t % i == 0){
      printf("no");
      break;
    }   
  }
  printf("yes");
  return 0;
}
