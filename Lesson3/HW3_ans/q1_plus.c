#include <stdio.h>
int check(int array[],int n,int k){
  int num = 0;
  for(int i = 0;i<n;i++){
    if(array[i]==k){
      num++;
    }
  }
  return num;
}
int main() {
	int n,k;
  scanf("%d%d",&n,&k);
  int array[n];
  for(int i=0;i<n;i++){
    scanf("%d",array+i);
  }
  int ans = check(array,  n, k);
  printf("%d",ans);
	return 0;
}
