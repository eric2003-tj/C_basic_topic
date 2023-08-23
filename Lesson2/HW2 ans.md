# HW2 ans

1. 一個月有幾天

```
#include <stdio.h>

int main(){
  int year,month;
  scanf("%d%d",&year,&month);
  switch(month){
    int leap = (year%400==0||(year%100!=0&&year%4==0));
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
      printf("31\n");
      break;
    case 2:
      if(leap){
        printf("29\n");
      }else{
        printf("28\n");
      }
      break;
    default:
      printf("30\n");
      break;
  }
  return 0;
}

```

2. 新手訓練 ~ for + if:

```
#include <stdio.h>

int main(){
  int N,a,b,c;
  scanf("%d",&N);
  for(int i = 0;i<N;i++){
    scanf("%d%d%d",&a,&b,&c);
    switch(a){
      case 1:
        printf("%d\n",a+b);
        break;
      case 2:
        printf("%d\n",a-b);
        break;
      case 3:
        printf("%d\n",a*b);
        break;
      case 4:
        printf("%d\n",a/b);
        break;
    }
  }
  return 0;
}

```