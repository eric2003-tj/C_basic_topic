#  HW6 ans

**q1**

```
int sum(int n){
  if(n == 1){
    return 1;
  }else{
    return sum(n-1)+n*n;
  }
}
```

**q2**
```
#include <stdio.h>

void shuffle(int *deck[]){
  int num = 0;
  while(deck[num]!=NULL){
    num++;
  }
  int *deck1[num-num/2];
  int *deck2[num/2];
  int size = num-num/2;
  for(int i = 0;i<size;i++){
    deck1[i] = deck[i];
  }
  for(int i = 0;i<num/2;i++){
    deck2[i] = deck[size+i];
  }
  int index1 = 0;
  int index2 = 0;
  for(int i = 0;i<num;i++){
    if(i%2==0){
        deck[i] = deck1[index1];
        index1++;
    }else{
        deck[i] = deck2[index2];
        index2++;
    }
  }


}
void print(int *deck[]){
  int index = 0;
  while(deck[index]!=NULL){
    printf("%d ",*deck[index]);
    index++;
  }

}

int main()
{
  int card[10000];
  int *deck[10000];
  int index = 0;

  while (scanf("%d", &(card[index])) != EOF) {
    deck[index] = &(card[index]);
    index++;
  }
  deck[index] = NULL;
  shuffle(deck);
  print(deck);
  return 0;
}


```