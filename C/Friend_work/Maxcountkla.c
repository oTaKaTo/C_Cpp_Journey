#include <stdio.h>
void main(){
    int k,n,i,j,x,cnt=0,max_cnt=0,r=0;
    scanf("%d %d",&k,&n);
    if(n>=2){
        for(i=1;i<=n;i++){
            for(;;){
                scanf("%d",&x);
                if(x==0)break;
                if(x>0 && x%k==0){
                    cnt++;
                }
            }
            if(cnt>=max_cnt){
                max_cnt = cnt;
                r = i;
            }
            cnt=0;
        }
        printf("%d %d",r,max_cnt);
    }
}