#include <stdio.h>

int main(){
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  if(a*a==(b*b+c*c)){
    printf("yes\n");
  }else if(a*a > (b*b+c*c)){
    printf("鈍角");
  }else{
    printf("銳角");
  }
  return 0;
}
