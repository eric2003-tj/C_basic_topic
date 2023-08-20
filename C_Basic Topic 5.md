# C_Basic Topic 5

## 浮點數

### 宣告

C程式語言有兩種浮點數，float 和 double。float 是一般的浮點數，通常占4個bytes。double 是倍準浮點數，通常占8個bytes，具有較高的精準度。

```
float f;
double df;
```

### 輸入輸出



| 種類| 格式字串 | 
| -------- | -------- | 
| float    | %f     | 
|double|%lf|

## 函式

我們時常利用函式來簡化我們的程式

函式分兩種：

1. 系統定義函式
2. 使用者定義函式

### 定義和呼叫函式

```
語法:
回傳值的資料型別  函式名稱([參數串列]){

	程式碼;
	[return value]
}
```
example 1:
```
#include <stdio.h>

void sayHello(){
	printf("Welcome\n");
}

int main() {
	sayHello();
	return 0;
}
```

example 2:

```
#include <stdio.h>
float temperature(int value){
	return 1.8 * value + 32;
}
int main() {
	float F = temperature(-40);
    printf("%f",F);
	return 0;
}
```

### 範例

給定一個陣列為bingo盤，請檢查是否賓果

**Step1 輸入盤面**

```
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int map[n*n];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            scanf("%d",&map[i*n+j]);
        }
    }
    return 0;
}
```

**Step2 寫檢查水平線**

```
#include <stdio.h>

int check_horizontal(int map[],int n){
    for(int i = 0;i<n;i++){
        int check = 1;
        for(int j = 0;j<n;j++){
            if(map[i*n+j]==0){
              check = 0;
              break;
            }
        }
        if(check == 1){
           return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int map[n*n];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            scanf("%d",&map[i*n+j]);
        }
    }
    int bool1 = check_horizontal(map,n);
    return 0;
}
```

**Step3 寫檢查垂直線**

```
Please do it by yourself;
```

## 練習

1. 請寫一個判斷閏年的程式
2. 請寫一個判斷質數的程式