#include <stdio.h>
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int array[n];
    int num = 0;
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
        if(array[i] == k){
            num++;
        }
    }
    printf("%d",num);
    return 0;
}
