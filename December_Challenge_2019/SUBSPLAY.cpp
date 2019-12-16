#include<iostream> 
#include<string.h> 

using namespace std; 

int SS(char *X,int m){
    int min=200000;
    for(int i=0;i<m;i++){
            for(int j=i+1;j<m;j++){
                if(X[i]==X[j]){
                    int temp=j-i;
                    if(temp==1)
                        return m-1;
                    if(temp<min)
                        min=temp;
                    else{
                        break;
                    }
                }
            }
        }
        if(min==200000)min=m;
        return m-min;
}

int main() 
{ 
    int t,i;
    scanf("%d",&t);

    for(i=0;i<t;i++){
        int m;
        scanf("%d",&m);
        char X[m];
       
        scanf("%s",X);
        
        printf("%d\n",SS(X,m));
     
    }
    return 0; 
} 