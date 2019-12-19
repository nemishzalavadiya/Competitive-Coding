#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int arr[26]={0};
int position(char a)
{
    return a-'a';
}
int main(){
    int n;
    cin>>n;
    cin>>ws;
    string odd="";
    vector<pair<char,int>> palindrom;
    string str;
    cin>>str;
    for(int i=0;i<n;i++){
        arr[position(str[i])]++;
    }
    //  for(int i=0;i<26;i++)
    //     cout<<arr[i]<<" ";
    //     cout<<endl;
    for(int i=0;i<26;i++){
        // cout<<arr[i]<<"calculate"<<endl;
        if(arr[i]==0)
            continue;
        if(arr[i]==1){
            odd='a'+i;
            continue;
        }
        if(arr[i]%2==0){
            // cout<<"added "<<'a'+i<<endl;
            palindrom.push_back(make_pair('a'+i,arr[i]/2));
        }
        if((arr[i]-1)%2==0){
            // cout<<"added "<<'a'+i<<endl;
            palindrom.push_back(make_pair('a'+i,(arr[i]-1)/2));
        }
        if(arr[i]%2!=0){
            odd='a'+i;
        }
    }
    // cout<<"palindrom is "<<palindrom.size()<<endl;
    // for(int i=0;i<palindrom.size();i++)
    // {
    //     cout<<palindrom[i].first;
    // }
    // cout<<endl;
    string ans="";
   
    for(int i=0;i<palindrom.size();i++)
    {
        while(palindrom[i].second--!=0){
        // cout<<"ans is "<<ans<<"count is "<<palindrom[i].second<<endl;
        ans+= palindrom[i].first;
        }
    }
    int length=ans.length();
    if(odd!=""){
        ans+=odd;
    }
    for(int i=length-1;i>=0;i--)
    {
        ans+=ans[i];
    }
    cout<<ans.length()<<endl;
    cout<<ans<<endl;
    return 0;
}