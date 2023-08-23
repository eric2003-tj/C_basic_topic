#include <stdio.h>
int map[10][256*256];
int board[10][256*256];
int test_horizontal(int n,int m){
    for(int i = 0;i<m;i++){
        int tick = 1;
        for(int j=0;j<m;j++){
            if(board[n][i*m+j]==0){
                tick = 0;
                break;
            }
        }
        if(tick==1){
            return 1;
        }
    }
    return 0;
}
int test_vertical(int n,int m){
    for(int i = 0;i<m;i++){
        int tick = 1;
        for(int j=0;j<m;j++){
            if(board[n][j*m+i]==0){
                tick = 0;
                break;
            }
        }
        if(tick==1){
            return 1;
        }
    }
    return 0;
}
int testcross(int n,int m){
    for(int i = 0;i<m;i++){
        if(board[n][i*m+i]==0){
            return 0;
        }
    }
    return 1;
}
int antitestcross(int n,int m){
    for(int i = 0;i<m;i++){
        if(board[n][(m-1-i)*m+i]==0){
            return 0;
        }
    }
    return 1;
}
int main(){
  int n,m;
  scanf("%d%d",&n,&m);
  for(int i = 0;i<n;i++){
    for(int j=0;j<m*m;j++){
        scanf("%d",&map[i][j]);
        board[i][j] = 0;
    }
  }
  for(int i = 0;i<m*m;i++){
    int num;
    scanf("%d",&num);
    for(int j = 0;j<n;j++){
        for(int k = 0;k<m*m;k++){
            if(map[j][k] == num){
                board[j][k] = 1;
                break;
            }
        }
    }
    int tick = 0;
    for(int j = 0;j<n;j++){
        if(testcross(j,m)||test_horizontal(j,m)||test_vertical(j,m)||antitestcross(j,m)){
            printf("%d %d\n",num,j);
            tick = 1;
        }
    }
    if(tick){
        break;
    }
  }
  return 0;
}
