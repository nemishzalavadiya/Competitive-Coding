#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int n;
    cin>>n;
    cin>>ws;
    string odd="";
    string str;
    cin>>str;
    int le=str.length();
    string strr = str;
    reverse(strr.begin(),strr.end());
    int a[le+1][le+1];
    // cout<<"printing"<<endl;
    for(int i=0;i<=le;i++){
        for(int j=0;j<=le;j++){
            a[i][j] =0;
        }
       
    }
  
    int max=0,inI,inJ;
    // cout<<"First elemets is : "<<a[0][0]<<endl;
    for(int i=0;i<=le;i++){
        for(int j=0;j<=le;j++){
            if(i==0 || j==0)
                a[i][j]=0;
            else if(strr[i-1]==str[j-1])
                a[i][j]=a[i-1][j-1]+1;
            else
                a[i][j]=0;
            if(max<a[i][j])
            {
                max=a[i][j];
                inI=i;inJ=j;
                // cout<<"i is "<<inI<<endl;
                // cout<<"j is "<<inJ<<endl;
            }
        }
    }
    //   for(int i=0;i<=le;i++){
    //     for(int j=0;j<=le;j++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    string ans="";
    // cout<<str<<endl;
    for(int i=inJ-max;i<inJ;i++){
        ans+=str[i];        
    }
    cout<<max<<endl;
    cout<<ans<<endl;
    return 0;
}