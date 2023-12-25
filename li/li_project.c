#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct add{
  int first;
  int second;
  int third;
  int last;
  char nickname[100]; //can be changed
}address_t;

void scan_address(int new_first,int new_second,int new_third,int new_last,char *nicks,address_t *arr,int index){
    arr[index].first = new_first;
    arr[index].second = new_second;
    arr[index].third = new_third;
    arr[index].last = new_last;
    strcpy(arr[index].nickname,nicks);
    return ;
}

int local_address(address_t *a1,address_t*a2){
    if(a1->first == a2->first && a1->second == a2->second){
        return 1;
    }else{
        return 0;
    }
}

void print_address(address_t*a1,address_t*a2){
    if(local_address(a1,a2)){
        printf("Machine %s and %s are on the same local network.",a1->nickname,a2->nickname);
    }else{
        printf("Machine %s and %s are on the different local network.",a1->nickname,a2->nickname);
    }
}
int main(){
    address_t *arr = (address_t*)malloc(sizeof(address_t)*100);
    int a,b,c,d;
    char nickname[100];
    int index = 0;
    while(scanf("%d.%d.%d.%d%s",&a,&b,&c,&d,nickname)!=EOF){
        scan_address(a,b,c,d,nickname,arr,index);
        index++;
    }
    print_address(arr,arr+2);
    free(arr);
    return 0;
}