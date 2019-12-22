#include<bits/stdc++.h>
#define n 100
#define skip 10 
using namespace std;
int main(){
    vector<int> a;int i;
    for(i=0;i<n;i++){
        if(i==skip){
            a.push_back(0);
            continue;
        }
        a.push_back(i);
    }
    // cout<<"size is : "<<a.size()<<endl;
    long long int temp=0;
    for(i=0;i<a.size();i++){
        // cout<<"temp"<<i<<" array is "<<a[i]<<endl;
        temp+=a[i];
    }
    // cout<<"temp is :"<<temp<<endl;
    // for(i=0;i<n;i++){
    //     cout<<"ith "<<i<<" array is "<<a[i]<<endl;
    // }
    int max = *max_element(a.begin(),a.end());
    long long int maxTotal=(max*(max+1))/2;
    // cout<<max<<endl;
    // cout<<maxTotal<<endl;
    cout<<(maxTotal-temp);
    return 0;
}