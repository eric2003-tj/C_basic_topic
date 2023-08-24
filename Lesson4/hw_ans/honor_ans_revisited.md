# Hw4 ans

```
#include <stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int board[n][m][m];
    int pos[n][m*m];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            for(int k = 0;k<m;k++){
                int tmp;
                scanf("%d",&tmp);
                pos[i][tmp-1] = j*1000+k;
                board[i][j][k] = 0;
            }
        }
    }
    for(int i = 0;i<m*m;i++){
        int key;
        scanf("%d",&key);
        int scout = 0;
        key--;
        for(int j = 0;j<n;j++){
            int p = pos[j][key];
            board[j][p/1000][p%1000] = 1;
        }
        for(int j = 0;j<n;j++){
            int bool1 = 0;
            for(int k = 0;k<m;k++){
                int bool2 = 1;
                for(int h = 0;h<m;h++){
                    if(board[j][k][h]==0){
                        bool2 = 0;
                        break;
                    }
                }
                if(bool2 == 1){
                    bool1 = 1;
                    break;
                }
            }
            if(bool1 == 1){
                printf("%d %d\n",key+1,j);
                scout = 1;
                continue;
            }
            for(int k = 0;k<m;k++){
                int bool2 = 1;
                for(int h = 0;h<m;h++){
                    if(board[j][h][k]==0){
                        bool2 = 0;
                        break;
                    }
                }
                if(bool2 == 1){
                    bool1 = 1;
                    break;
                }
            }
            if(bool1 == 1){
                printf("%d %d\n",key+1,j);
                scout = 1;
                continue;
            }
            int bool3 = 1;
            for(int k = 0;k<m;k++){
                if(board[j][k][k]==0){
                    bool3 = 0;
                    break;
                }
            }
            if(bool3 == 1){
                printf("%d %d\n",key+1,j);
                scout = 1;
                continue;
            }
            bool3 = 1;
            for(int k = 0;k<m;k++){
                if(board[j][k][m-1-k]==0){
                    bool3 = 0;
                    break;
                }
            }
            if(bool3 == 1){
                printf("%d %d\n",key+1,j);
                scout = 1;
            }
        }
        if(scout == 1){
            break;
        }
    }
    return 0;
}

```
