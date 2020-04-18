#include <iostream>

using namespace std;

int maxValue(int arr[],int n){
    
    int dp[n+1];
    dp[0]=arr[0];
    dp[1]=arr[1];
    for(int i=2;i<n;i++){
        dp[i]=max(arr[i]+dp[i-2],dp[i-1]);
    }
    return dp[n-1];
}

int main()
{
   int a[]={1,2,3,4,12,4,1333,45,66};
   cout<<maxValue(a,sizeof(a)/sizeof(a[0]));
   
   return 0;
}