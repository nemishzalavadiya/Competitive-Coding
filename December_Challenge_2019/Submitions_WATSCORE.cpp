#include<bits/stdc++.h>
int main(){
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        int n,j,score=0;
        int ans[9]={0};
        scanf("%d",&n);
        int submittion[n][2];
        for(j=0;j<n;j++){
            scanf("%d %d",&submittion[j][0],&submittion[j][1]);
        }
        for(j=0;j<n;j++){
            if(submittion[j][0]<=8)
            {
                if(ans[submittion[j][0]]<submittion[j][1])
                    ans[submittion[j][0]]=submittion[j][1];
            }
        }
        for(j=0;j<9;j++){
            score+=ans[j];
        }
        printf("%d\n",score);
    }

    return 0;
}