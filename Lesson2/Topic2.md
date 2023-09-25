# C_Basic Topic 2

## 判斷

**If 判斷**

```
if(boolean expression){
    statement1
}else if(boolean expression){
    statement2
}else{
    statement3
}   
```

example:

```
#include <stdio.h>

int main(){
 int a,b;
 scanf("%d%d",&a,&b);
 if(a == b){
     printf("1\n");
 }else{
     printf("0\n");
 }
 return 0;
}
```

**Switch**

```
switch(a){
    case 1: case 3: ....
        statement
    case 2: case 4: ....
        statement
    default:
        statement
}
```

example:

```
#include <stdio.h>

int main(){
    int month;
    scanf("%d",&month);
    if(month < 1 || month > 13){
     printf("error");
     return 0;
    }
    switch(month){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("31\n");
        break;
        case 2:
        printf("28\n");
        break;
        default:
        printf("30\n");
        break;
    }
    return 0;
}
```

## 流程控制

**while**

```
while(condition){
  statement
}
```

example:

```
#include <stdio.h>

int main(){
  int i = 0;
  while(i < 10){
      printf("%d\n",i);
      i++;
  }
  return 0;
}
```

**for**

```
for(initialization;constraint;iteration){
  statement
}
```

example:

```
#include <stdio.h>

int main(){
     int i;
     for(i=0;i<10;i++){
         printf("%d\n",i);
     }
     return 0;
}
```

**break**

example:

```
#include <stdio.h>

int main(){
     int i;
     int target;
     scanf("%d",&target);
     for(i=0;i<10;i++){
         printf("%d\n",i);
         if(i == target){
           printf("halt\n");
           break;
         }
     }
     return 0;
}
```

**Continue**

example:

```
#include <stdio.h>

int main(){
     int i;
     int target;
     scanf("%d",&target);
     for(i=0;i<10;i++){
         if(i == target){
           printf("skip\n");
           continue;
         }
         printf("%d\n",i);
     }
     return 0;
}
```


## 練習

1. 給定一個正整數，判斷其為質數否
2. 給定兩個正整數，是求其最大公因數
3. 承上，最小公倍數

