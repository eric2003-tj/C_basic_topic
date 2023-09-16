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
## Structure array

structure array 可以用malloc 宣告

```
Student *array = (Student*)malloc(sizeof(Student)*10); //declare an array of length 10.
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
  Student *arr = (Student*)malloc(sizeof(Student)*10);
  for(int i = 0;i<10;i++){
    scanf("%s%d%d",arr[i].name,&arr[i].age,&arr[i].id);
  }
  for(int i = 0;i<10;i++){
    printf("%s %d %d\n",arr[i].name,arr[i].age,arr[i].id);
  }
  return 0;
}
```

## elementary data structure via structure

**Linked list**

Linked list is a data structure that can connect node via pointer.

declaration:

```
struct node{
  int data;
  struct node* ptr;
}
```
**Doubly linked list**

You can also use a doubly linked list to better meet your demand.

declaration:

```
struct node{
  int data;
  struct node* forward;
  struct node* backward;
}
```
