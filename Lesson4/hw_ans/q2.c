#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    for(int i = 0;i<N;i++){
        int m,n;
        scanf("%d%d",&m,&n);
        int array[m*n];
        for(int j = 0;j<m*n;j++){
            scanf("%d",array+j);
        }
        int front = 0;
        int last = m*n-1;
        int tick = 1;
        while(front<=last){
            if(array[front]!=array[last]){
                tick = 0;
                break;
            }
            front++;
            last--;
        }
        if(tick){
            printf("go forward\n");
        }else{
            printf("keep defending\n");
        }
    }
    return 0;
}
