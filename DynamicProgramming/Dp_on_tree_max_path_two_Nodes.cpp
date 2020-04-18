#include<bits/stdc++.h>
#define N 15
using namespace std;
vector<int> adj[N];
int f1[N],f2[N],dia;
void dfs(int child,int parent){
    vector<int> child_list;
    for(auto v: adj[child]){
        if(v==parent)
            continue;
        
        dfs(v,child);
        //cout<<"parent : "<<parent<<"|| parent's child : "<<child<<"|| child of child : "<<v<<endl; 
        // pre-order traversel
        child_list.push_back(v);
    }
    cout<<"for parent --> "<<child<<endl;
    cout<<"child --> ";
    for(auto v:child_list){
        cout<<v<<" : ";
    }
    cout<<endl;
    f1[child]=1;
    if(not child_list.empty() ){
        //as list is shorted max is at last so,
        f1[child]+=child_list.back();
    }
    if(child_list.size()>=2)
         f2[child] = 2 + child_list.back() + child_list[child_list.size()-2];
    dia = max(dia, max(f1[child], f2[child]));
    cout<<"Dia : "<<dia<<endl;
}

int main(){

    int n,u,v;
    cout<<"Number of edges : ";
    cin>>n;
    cout<<"Enter relation edges for 15 nodes"<<endl;
    for(int i=0;i<N;i++){
        f1[i]=-1;
        f2[i]=-1;
    }
    for(int i=0;i<n;i++){
        cin>>u>>v;
        adj[u].push_back(v);
    }
    cout<<"pre-order : "<<endl;
    dfs(2,1);
    cout<<"Max is : "<<dia<<endl;
    return 0;
}