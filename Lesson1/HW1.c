#include <stdio.h>

int main(){
  int total;
  scanf("%d",&total);
  int fifty,ten,five,one;
  fifty = total/50;
  total %= 50;
  ten = total/10;
  total %= 10;
  five = total/5;
  total %= 5;
  one = total;
  printf("%d %d %d %d",fifty,ten,five,one);
  return 0;
}
