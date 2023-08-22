# C_Basic Topic 6

## 遞迴

遞迴是根據數學歸納法來的重要運算：

1. 基本條件
2. 遞規條件

**application**

1. 求階乘

```
int factorial(int n){
  if(n == 1){
      return 1;
  }else{
    return n*factorial(n-1);
  }
}
```

2. Hanoi Tower

```
void Hanoi(int n,char *src,char *des,char *buffer){
    if(n == 1){
          printf("move one from %s to %s\n",src,des);
    }else{
          Hanoi(n-1,src,buffer,des);
          printf("move one from %s to %s\n",src,des);
          Hanoi(n-1,buffer,des,src);
    }
}
```
## 指標(pointer)

**Overview**

1. 指標變數的值代表了另一個變數的記憶體位置
2. 指標變數的宣告需要引入其所指向的變數的資料類別
3. 在C語言中，指標變數一律佔8bytes

**宣告**

```
int *iptr;
```
iptr為指向一個整數的指標

```
float *fptr
```

fptr為指向一個浮點數的指標

**操作**

example : assignment

```
int i = 3;
int *iptr;
iptr = &i;
int *iptr2;
iptr2 = iptr;
```

example : dereference

```
int i = 3;
int *iptr;
printf("%d",*iptr); // 3
```

Note : 我們可以利用指標來傳遞陣列

example : 

```
int find(int *arr,int len){
    for(int i = 0;i<len;i++){
        if(arr[i] == 1){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int k = find(arr,5);
    printf("%d",k);
    return 0;
}
```
**陣列**

指標和陣列有高度的相連性

key : iptr+i = &iptr[i]

```
#include <stdio.h>

int main(){
  int arr[10] = {0};
  int *iptr = arr;
  for(int i = 0;i<10;i++){
      printf("%d ",iptr[i]);
  }
  return 0;
}
```

**指標陣列**

宣告

```
int *arr[10];
```






