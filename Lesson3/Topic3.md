# C_Basic Topic 3

## 多重迴圈

有時，我們想在每一次迴圈迭代的過程再進行一次新的迴圈，此時便需要多重迴圈

example : 九九乘法表 
```
#include <stdio.h>

int main(){
    for(int i = 1;i <= 9;i++){
        for(int j = 1;j <= 9;j++){
            printf("%d*%d=%d ",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}
```

## 一維陣列(array)

陣列是在計算機科學中十分常見且重要的資料結構，旨在儲存一連串同資料型別的變數

**陣列宣告**

```
int arr[5];
```

在上述的宣告中，前面的int代表著這個陣列是儲存整數用的，[  ] 代表此為一個陣列，5代表其可以容納5個元素。

陣列也可以用下列片語宣告：

```
int arr[5] = {1,2,3,4,5};
```

補充資料(學完指標再回來看)：

上述宣告等同於下列宣告法

```
int *arr = (int*)malloc(sizeof(int)*5);
```

**陣列的取值**

在一個陣列中，特定位置存放的元素取法是藉由註標(index)，也就是說，array[i]即為陣列在註標為i時所存的值。

Note: index從0開始

example: 印出陣列內所有值
```
include <stdio.h>

int main(){
 int arr[5] = {1,2,3,4,5};
 for(int i = 0;i < 5;i++){
     printf("%d\n",arr[i]);
 }
 return 0;
}
```

**陣列內元素的處理**

```
//let array length n
for(int i = 0;i<n;i++){
    processing array[i]
}
```

example: 內積的計算

description: 給定長度n及A陣列和B陣列，兩個陣列長為n，試計算出A和B的內積值

```
#include <stdio.h>

int main(){
    int len;
    scanf("%d",&len);
    int A[len];
    int B[len];
    for(int i = 0;i<len;i++){
        scanf("%d",&A[i]);
    }
    int sum = 0;
    for(int i = 0;i<len;i++){
        scanf("%d",&B[i]);
        sum += (A[i]*B[i]);
    }
    printf("&d",sum);
    return 0;
}
```

## 泡沫排序法(additional material)

Pseudocode:

```
A is an array with length n

for i = 0 to n-2:
    for j = i+1 to n-1:
        if(A[i] > A[j]):
            swap(A[i],A[j])
```

## 練習

1. 請輸出2-100內所有質數
2. 給定一個整數陣列長n，請將其由小到大排序(additional material)
