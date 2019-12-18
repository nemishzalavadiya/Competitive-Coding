#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
bool sortinrev(const pair<int,int> &a,  
               const pair<int,int> &b) 
{ 
       return (a.first > b.first); 
}
int main(){
    ll n;
    cin>>n;
    ll penalty=0;
    int first,temp,temp1;
    vector<pair<int,int>> end;
    vector<int> time;
    for(int i=0;i<n;i++)
    {
        cin>>first>>temp>>temp1;
        end.push_back(make_pair(temp+temp1,first));
    }
    sort(end.begin(),end.end(),sortinrev);
    ll ma=0;
    for (int i=0;i<end.size();i++) {
        ma=max(ma,penalty+end[i].first+end[i].second);
        penalty+=end[i].second;
        
    }
    cout<<ma<<endl;
    return 0;
}