#include <iostream>

using namespace std;
int maxi=0;
int maxValue(int arr[],int n){
    int ans=0;
    if(n==0) return arr[0];
    if(n==1) return arr[1];
        //dp[i]=max(arr[i]+dp[i-2],dp[i-1]);
       ans = max(arr[n]+maxValue(arr,n-2),maxValue(arr,n-1));
       
    
   return ans;
}

int main()
{
   int a[]={1,2,3,4,12,4,1333,45,66};
   cout<<maxValue(a,(sizeof(a)/sizeof(a[0]))-1)<<endl;
   cout<<maxi<<endl;
   return 0;
}