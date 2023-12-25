# C_Basic Topic 9

## File IO

Sometimes we want to use C program to handle IO of File, in C, we can use file pointer to represent a file(In Linux C, we use file descriptor fd)

```
FILE *in;
```

### fopen,fclose

We can use fopen to open a file, and fclose works to close a file.

```
#include <stdio.h>

int main(){
  FILE *in;
  in = fopen("input.txt","r"); // read only
  fclose(in);
}
```
#### mode

<img src = "./file.png"/>

Note : If you fail to open a file, fopen will return NULL.


### fscanf,fprintf

We can use fscanf to read a string from a file

```
#include <stdio.h>

int main(){
  FILE *in;
  in = fopen("input.txt","r"); // read only
  char str[80];
  while(1){
    if(feof(in)){
      break;
    }
    fscanf(in,"%s",str);
    printf("%s\n",str);
  }
  fclose(in);
}
```

You can use fscanf to handle more.

```
#include <stdio.h>

int main(){
  FILE *in;
  in = fopen("input.txt","r"); // read only
  char str[80];
  char str2[80];
  int num;
  while(1){
    fscanf(in,"%s %s %d",str,str2,&num);
    if(feof(in)){
      break;
    }
    printf("%s %s %d\n",str,str2,num);
  }
  fclose(in);
}
```

You can use fprintf to write a file.

```
#include <stdio.h>

int main(){
  FILE *in;
  FILE *out;
  in = fopen("input.txt","r"); // read only
  char str[80];
  char str2[80];
  int num;
  out = fopen("out.txt","w");
  while(1){
    fscanf(in,"%s %s %d",str,str2,&num);
    if(feof(in)){
      break;
    }
    fprintf(out,"%s %s %d\n",str,str2,num);
  }
  fclose(in);
  fclose(out);
}
```

### fflush

When writing a file, the content you write will not immediately write into the file. It will not be written to the file until the file is closed. If you want to write the file immediately, you can use fflush.

```
#include <stdio.h>

int main(){
  FILE *in;
  FILE *out;
  in = fopen("input.txt","r"); // read only
  char str[80];
  char str2[80];
  int num;
  out = fopen("out.txt","w");
  while(1){
    fscanf(in,"%s %s %d",str,str2,&num);
    if(feof(in)){
      break;
    }
    fprintf(out,"%s %s %d\n",str,str2,num);
    fflush(out);
  }
  fclose(in);
  fclose(out);
}
```

### fread

You can use fread() to read a binary file

```
#include <stdio.h>

int main(){
  FILE *fp;
  int test[5];
  fp = fopen("test.bin","rb");
  for(int i = 0;i<5;i++){
    fread(&test[i],sizeof(int),1,fp);
  }
  for(int i = 0;i<5;i++){
    printf("%d\n",test[i]);
  }
  fclose(fp);
}
```