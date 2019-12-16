#include<bits/stdc++.h>
using namespace std;

int main(){
     int n=0,m=0,run=1;
    scanf("%d %d",&n,&m);
    int elect[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",elect[i][j]);
        }
    }
    while(run){
        int can[n]={0};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                can[i]+=elect[j][i];
            }
        }
        int temp=can[n-1];
        for(int i=0;i<n-1;i++){
            if(can[i]>=temp){
                printf("0\n");
                break;}
        }
        int n1 = sizeof(can)/sizeof(can[0]);
        sort(can,can+n1);
        if(can[0]>temp)
        {printf("0\n");break;}

    }
    return 0;
}