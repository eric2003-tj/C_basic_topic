# C_basic Topic 8

## structure

結構可以儲存多樣變數以簡便我們操作  宣告方法如下：

```
struct student{
  char *name;
  int age;
  int id;
}
```

你可以使用typedef 來簡化(在stdlib.h裡)

```
typedef struct student Student;
```

**Example**

```
#include <stdio.h>
#include <stdlib.h>

typedef struct student{
  char name[10];
  int age;
  int id;
}Student;

int main(){
  Student jack;
  scanf("%s%d%d",jack.name,&jack.age,&jack.id);
  printf("%s\n%d\n%d\n",jack.name,jack.age,jack.id);
  return 0;
}
```
