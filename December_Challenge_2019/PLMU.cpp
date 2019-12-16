#include<bits/stdc++.h>
int main(){
    int i,t,count=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        int n,j,a=0,b=0;
        scanf("%d",&n);
        long list[n+1]={0};
        for(j=1;j<=n;j++){
            scanf("%ld",&list[j]);
        }
        for(j=1;j<=n;j++){
            if(list[j]==2)
            a++;
            if(list[j]==0)
            b++;
        }
    
        if(a>1)
        {
            count+=((a*(a-1))/2);
        }
        if(b>1){
            count+=((b*(b-1))/2);
        }
        printf("%d\n",count);
        count=0;
    }
    return 0;
}