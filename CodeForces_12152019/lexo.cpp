#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        string s1,s2;int flag=0;
        cin>>s1;
        cin>>s2;
        int len=s1.length();
        if(s1.length()<s2.length()){
            string les=s2.substr(0,s1.length());
            if(les==s1){
                
                if( lexicographical_compare(s1.begin(),s1.end(),s2.begin(),s2.end()) )
                { 
                    cout << s1<<endl; 
                    
                }
                continue;
            }
            // else{
            //     int k;
            //     for(k=j+1;k<len;k++){
            //         if(s1[k]<s2[j]){
            //             char temp=s1[k];
            //             s1[k]=s1[j];
            //             s1[j]=temp;
            //             flag=1;
            //         }
            //     }
            //     if(k==len){
            //         printf("---\n");
            //         break;
            //     }
            // }
        }
        
        for(int j=0;j<len;j++){
            if(flag==1){
                if( lexicographical_compare(s1.begin(),s1.end(),s2.begin(),s2.end()) )
                { 
                    cout << s1<<endl; 
                    
                }else{cout<<"---"<<endl;}
                
                flag=0;
                break;
            }
            if(s1[j]==s2[j]){
                continue;
            }
            else if(s1[j]<s2[j]){
                if( lexicographical_compare(s1.begin(),s1.end(),s2.begin(),s2.end()) )
                { 
                    cout << s1<<endl; 
                    
                }else{cout<<"---"<<endl;}
                break;
            }
            else{
                int k;
                for(k=j+1;k<len;k++){
                    if(s1[k]<s2[j]){
                        char temp=s1[k];
                        s1[k]=s1[j];
                        s1[j]=temp;
                        flag=1;
                        break;
                    }
                }
                if(k==len && flag==0){
                    printf("---\n");
                    break;
                }
            }
        }
        
    }
    return 0;
}