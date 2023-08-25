# HW7_honor_ans

```
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char input[128];
  char abb[128];
  int abb_len = 0;
  while(scanf("%s",input)!=EOF){
    int len = strlen(input);
    if(input[len-1] == '.'){
        abb[abb_len] = toupper(input[0]);
        abb_len++;
        abb[abb_len] = '\0';
        printf("%s ",abb);
        abb_len = 0;
    }else{
        if(strcmp(input,"of")==0 || strcmp(input,"the")==0||strcmp(input,"and")==0||strcmp(input,"at")==0){
            continue;
        }else{
           abb[abb_len] = toupper(input[0]);
           abb_len++;
        }
    }
  }
  return 0;
}


```