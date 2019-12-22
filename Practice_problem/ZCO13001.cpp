#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int n;
    cin>>n;
    ll a[n];
    ll b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i==0)
            b[i]=a[i];
        else{
            b[i]=b[i-1]+a[i];
        }
        
    }
    sort(a,a+n);
    ll rev=0;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         rev+=(abs(a[i]-a[j]));
    //     }
    // }
    for(int i=0;i<n;i++){
       rev+=(i+i+1-n)*a[i];
    }
  
   
   cout<<rev<<endl;
}