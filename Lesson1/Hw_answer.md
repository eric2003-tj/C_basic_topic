# Homework1 Answer

Q1:

```
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
```

Q2:

```
#include <stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    int bool1 = ((year%400==0) || ((year%4==0) && (year%100!=0)));
    printf("%d",bool1);
    return 0;
}
```
