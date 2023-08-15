# C_Basic topic 1

## 基本架構
 
當我們用C語言寫程式時，我們會引入程式基本架構，示意如下：

```
#include <stdio.h> // Using header file
int main(){

 return 0;
}
```

## 變數

在C程式語言中，變數需經過宣告才能使用，變數宣告方法如下：

```
int i;
```

一個變數有四個屬性：
1. 類別：
2. 名稱：
3. 值：
4. 位址：

變數可以宣告初始值

```
int i = 0;
```

同型別變數可以一次宣告多個

```
int i,j,k;
```

變數的命名：
1. 第一個字元，只可以是英文字
2. 第一個字元符號，只可以是_
3. 文字內不可以有特殊符號

## 資料類別

數值型別 | 記憶體大小 | 範圍
------|------ | ---
char | 1 Byte | -128 ~ 127
unsigned char | 1 Byte | 0 ~ 255
short | 2 Byte | -32768 ~ 32767
unsigned short | 2 Byte | 0 ~ 65535	
int | 4 Byte | -2147483648 ~ 2147483647
unsigned int | 4 Byte | 0 ~ 4294967295
long | 4 Byte | -2147483648 ~ 2147483647
long long | 8 Byte | ——————————-
unsigned long | 4 Byte | 0 ~ 4294967295
float | 4 Byte | 6,7位數
double | 8 Byte | 15位數

## 輸入

我們要用C語言進行輸入動作時，必須符合下面片語

```
int i;
scanf("%d",&i);
```

"%d"是格式字串，代表著輸入整數
&i 代表輸入的東西存到i的位址

我們可以一次輸入多個數

```
scanf("%d%d",&i,&j);
```


## 輸出

1. 輸出字串
```
printf("Hello world");
```
在C語言中，我們以""來包住完整字串

2. 輸出變數

```
int i = 5;
printf("%d",i);
```
3. 混和輸出

```
int age = 20;
printf("I am %d years old.",age);
```

## c語言輸出控制符號
| 字串格式化 | 說明 |
|:---------|:----|
|%d | 按十進制整數實際長度輸出 |
|%ld | 輸出長整數 |
|%u  | 輸出無符號整數 |
|%hhu  | unsigned char |
|%c  | 輸出字元 |
|%f  | 輸出實數(浮點數) |
|%lf | double |
|%o  | 輸出八進位 |
|%s  | 輸出字串 |
|%x  | 輸出十六進位 |

```

#include <stdio.h>

int main(void) {
	char letter;
	int age;
	char url[30];
	float price;
	
	printf("請輸入字元:");
	scanf("%c", &letter);
	printf("請輸入age:");
	scanf("%d",&age);
	printf("請輸入字串:");
	scanf("%s", url);
	printf("請輸入價格:");
	scanf("%f", &price);
	
	printf("這是字元:%c\n",letter);
	printf("這是整數:%d，這是字串:%s, 這是浮點數:%f\n",age, url, price);

    return 0;
}
```
## 運算

### 算數運算子
算數運算子|意義|
-----|----|
+| 加 |
-| 減 |
*|乘|
/|除|
%|餘|
++|遞增|
--|遞減|


### 邏輯運算子
 
| ! | not |
|:--|:--|
| && | and |
| 2直線 | or |

### 比較運算子

| > | 大於 |
|:--|:--|
| < | 小於 |
| == | 相等 |
| >= | 大於或等於|
| <= | 小於或等於|

### 指定(assignment)

在C語言，"=" 為指定之意，並非相同

```
int i;
i = 5; //i assigns to 5
```

## 基本邏輯

**Boolean Algebra**

在布林代數中，1 代表 true ， 0 代表 false

**And**

| a | b | a and b |
| -------- | -------- | -------- |
| 0    | 0     | 0     |
| 0 | 1 | 0|
| 1 | 0 | 0|
| 1 | 1 | 1|

**Or**

| a | b | a or b |
| -------- | -------- | -------- |
| 0    | 0     | 0     |
| 0 | 1 | 1|
| 1 | 0 | 1|
| 1 | 1 | 1|

## 練習

1. 給定3個整數，試求出平均數(注意資料類別)
2. 讓使用者輸入梯形的上底、下底及高，程式會計算梯形的面積(上底加下底乘以高除以2)




