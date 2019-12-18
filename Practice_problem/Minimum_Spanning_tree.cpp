#include <bits/stdc++.h>
using namespace std;
#define max_in 1000000
typedef long long int ll;
int main()
{
    
    int n,m;
    cin>>n>>m;
    ll graph[n][n];
    for(int j=0;j<n;j++) {
          for(int k=0;k<n;k++) {
              graph[j][k]=max_in;
          }
       }
    int u,v;
    ll w;
   
    for(int i=0;i<m;i++)
    {
        cin>>u>>v>>w;
        graph[u-1][v-1]=w;
        graph[v-1][u-1]=w;
        
        
    }
    
    for(int i=0;i<n;i++) graph[i][i]=0;
 
   for(int k=0;k<n;k++)
    {
        for(int j=0;j<n;j++)
        {
            for(int i=0;i<n;i++) 
            {
                if(graph[i][j]>graph[i][k]+graph[k][j])
                    graph[i][j]=graph[i][k]+graph[k][j];
                
            }
            
        }
    }
    
    ll x=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            x=max(x,graph[i][j]);

        }
       
    }
    
    cout<<x<<"\n";
    return 0;
}