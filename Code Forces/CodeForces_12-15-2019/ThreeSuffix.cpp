#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        string s;
        cin>>s;
        switch(s[s.length()-1]){
            case 'o' : printf("FILIPINO\n");
                        break; 
            case 'u' : printf("JAPANESE\n");
                        break;
            case 'a' : printf("KOREAN\n");
                        break;
        }
    }
    return 0;
}