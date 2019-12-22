#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        int x,l=-1;
        cin>>x;
        string s;
        string c="";
        cin>>s;
        l++;
        while(l!=x){
            c=s.substr(l+1,s.length());
            s=s.substr(0,l+1);
            for(int k=0;k<(int)s[l]-(int)'0';k++){
                s.append(c);
            }
            l++;
        }
        cout<<(s.length()%(1000000007))<<endl;
        
    }
    return 0;
}