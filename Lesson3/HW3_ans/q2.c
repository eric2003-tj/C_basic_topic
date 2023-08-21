#include <stdio.h>
int main(){
    int odd,even;
    odd = 0;
    even = 0;
    int tick = 0;
    int d;
    while(scanf("%d",&d)!=EOF){
        if(tick){
            odd += d;
        }else{
            even += d;
        }
        tick = !tick;
    }
    if(even-odd>=0 && (even-odd)%11==0){
        printf("yes");
    }else if(odd-even>=0 && (odd-even)%11==0){
        printf("yes");
    }else{
        printf("no");
    }
    return 0;
}
