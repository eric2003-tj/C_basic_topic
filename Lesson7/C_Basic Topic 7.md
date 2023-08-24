# C_Basic Topic 7

## 字串介紹

在前面，我們介紹過字元，而字串則是以字元構成的陣列

```
char string[6] = {'a','p','p','l','e','\0'};
```

在C語言裡，每個字串都必須要有結束字元 '\0'。

## 輸入輸出

**輸入字串**

```
char str[80];
scanf("%s",str);
```

**輸出字串**

```
char str[80];
printf("%s",str);
```

## 字串宣告

**type1**

```
char str[5] = {'a','b','c','d'.'\0'};
```

**type2**

```
char str[80] = "Hello world!";
```

**type3**

```
char str[] = "Yellow";
```

## 以指標代表字串

```
char str[80];
char *ptr = str;
```

## 字串處理的函式

必須先引入<string.h>的標頭檔

```
#include <string.h>
```

**strlen**

此函式可以計算字串長度

函式原型

```
int strlen(char *str);
```

使用

```
char str[10] = "apple";
char *ptr = str;
int len = strlen(ptr); // len = 5
```

**strcpy**

此函式可以複製指定字串的內容到目標字串內

函式原型

```
char *strcpy(char *destination,char *source);
```

使用

```
char des[80] = "apple";
char src[80] = "bold";
strcpy(des,src);
printf("%s",des); //bold
```

Note : 在使用的時候必須注意陣列大小

**strcat**

此函式可以黏貼指定字串的內容到目標字串後

函式原型

```
char *strcat(char *destination,char *source);
```

使用

```
char des[80] = "apple";
char src[80] = "bold";
strcpy(des,src);
printf("%s",des); //applebold
```

Note : 在使用的時候必須注意陣列大小

**strcmp**

此函式可以比較兩個字串，如果兩個字串相等回傳0,如果前者大於後者回傳正值，反之負值

函式原型

```
int strcmp(char *destination,char *source);
```

使用

```
char des[80] = "apple";
char src[80] = "bold";
int a = strcmp(des,src);
printf("%d",a); //minus
```

## 練習

1. 試自訂函式輸出字串長度
