#include <stdio.h>

int main(){
    int composite[101] = {0};
    for(int i = 2;i<=100;i++){
      if(composite[i]){
        continue;
      }else{
        int tick = 1;
        for(int j = 2;j*j<=i;j++){
          if(i%j==0){
            tick = 0;
            break;
          }
        }
        if(!tick){
          for(int j = 1;j*i<=100;j++){
            composite[j*i] = 1;
          }
        }
      }
    }
    for(int i =2;i<=100;i++){
      if(!composite[i]){
        printf("%d ",i);
      }
    }
    return 0;
}
