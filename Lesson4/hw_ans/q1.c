#include <stdio.h>
int main(){
  int m,n;
  scanf("%d%d",&m,&n);
  int arr[n][m];
  for(int i = 0;i<m;i++){
    for(int j = 0;j<n;j++){
      scanf("%d",&arr[j][i]);
    }
  }
  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}
