int check_vertical(int map[],int n){
    for(int i = 0;i<n;i++){
        int check = 1;
        for(int j = 0;j<n;j++){
            if(map[j*n+i]==0){
              check = 0;
              break;
            }
        }
        if(check == 1){
           return 1;
        }
    }
    return 0;
}
