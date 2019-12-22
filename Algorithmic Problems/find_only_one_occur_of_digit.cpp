#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={2,3,3,4,4,5,5,6,6,8,8,2},i;
    for(i=1;i<sizeof(a)/sizeof(a[0]);i++){
        a[i]=a[i]^a[i-1];
    }
    cout<<a[i-1];
    return 0;
}