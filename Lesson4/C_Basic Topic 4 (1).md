# C_Basic Topic 4

## 取位值及求位置存取的值

| & | * | 
| -------- | -------- |
| 取位值    |  求位置存取的值    | 


## 陣列及記憶體

在C語言中，陣列的開頭位置即為陣列第一個元素的位置

```
#include <stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    if(arr == &(arr[0])){
        printf("true");
    }
    return 0;
}
```

因此，我們可以利用下列方法來求陣列儲存的值

```
int arr[5] = {1,2,3,4,5};
printf("%d",*(arr+3)); //取arr[3]
```

## 多維陣列

在有時，我們想要表現多維度的資料，此時我們就會使用多維陣列，宣告方法如下

```
int arr[3][5];
```

操作方法類似於一維陣列，以下面程式碼為例

```
#include <stdio.h>

int main(){
    int arr[3][5]; 
    for(int i = 0;i<3;i++){
        for(int j = 0;j<5;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0;i<3;i++){
        for(int j = 0;j<5;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
```

## 字串介紹

在前面，我們介紹過字元，而字串則是以字元構成的陣列

```
char string[6] = {'a','p','p','l','e','\0'};
```

在C語言裡，每個字串都必須要有結束字元 '\0'，其他字串的細節則留到之後介紹

## 練習

1. 給定矩陣A及矩陣B的列行數及相對應的值，是計算出矩陣相乘的結果


## Topic 1-4 細節補充

### 複合指定運算子
 運算子 | 意義 
---|--- 
+= | 加等於 
-= | 減等於 
*= | 乘等於 
/= | 除等於
%= | 餘等於 

### 強制轉換

```
語法:
(資料型別) 變數名稱;
```

### 讀資料讀到結束

```
while(scanf("%d",&data)!=EOF){
    process data
}
```

### 用指令編譯c程式檔(optional)

```
gcc main.c -o main
./main < input.txt > output.txt
cat output.txt
```
