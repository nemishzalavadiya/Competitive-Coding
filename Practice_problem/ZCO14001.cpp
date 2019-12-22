#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int n,h;
    cin>>n>>h;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> cmd;
    int temp=1;
    while(temp!=0){
        cin>>temp;
        cmd.push_back(temp);
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<cmd.size();i++){
    //     cout<<cmd[i]<<" ";
    // }
    // cout<<endl;
    int position=0;
    int pick=0,quit=0;
    vector<int>::iterator it;
    it=cmd.begin();
    while(cmd.size()>0){
        // cout<<"position is "<<*it<<" ";
        switch(*it){
            case 1: if(position==0){
                        it++;
                        break;
                    }   
                    position--;
                    it++;
                    break;
            case 2: if(position==(n-1)){
                    it++;
                    break;
                    }
                    position++;
                    it++;
                    break;
            case 3: if(pick==1 || arr[position]==0){
                        it++;
                        break;
                    }
                    arr[position]--;
                    pick=1;
                    it++;
                    break;
            case 4: if(pick==0 || arr[position]>=h){
                        it++;
                        break;
                    }
                    arr[position]++;
                    pick=0;
                    it++;
                    break;
            case 0: quit=1;
                    break;
                    
        }
        if(quit==1){
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            cmd.clear();
        }
    }
}