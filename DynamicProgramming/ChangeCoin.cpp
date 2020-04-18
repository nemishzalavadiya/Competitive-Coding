//coin exchange with duplicate allowed using recursive memoisation

#include <iostream>


using namespace std;
int a[]={100,50,20,10,5,2,1};
int n=7;
long long int count=0;
int map[100];
 int minCoin(int value){
     count+=1;
    cout<<"Count : "<<count<<endl;
    int current=1000000;
    int minimum=1000000;

    //cout<<"Value is : "<<value<<endl;
    if(value==0)
        return 0;
    // if(map[value]!=-1){
    //     return map[value];
    // }
    if(value<0)
        exit(0);
    for(int i=0;i<n;i++){
        //cout<<value-a[i]<<endl;
        if( value-a[i]<0)
            continue;
        int current=  minCoin(value-a[i]) ;

        if( minimum > current+1 )
            minimum=current+1;
            map[value]=minimum;
        //cout<<"Value "<<value<<" coin "<<minimum<<endl;
        
    }
    //cout<<"final value "<<value<<" coin "<<minimum<<endl;
    return minimum;
}

int main()
{
    int n=15;
   for(int i=0;i<100;i++){
       map[i]=-1;
   }
   cout<<"running started ...."<<endl;
   cout<<minCoin(n)<<endl;
   cout<<"compelted running"<<endl;
//    for(int i=0;i<100;i++){
//        cout<<i<<" th coin : "<<map[i]<<endl;
//    }
   return 0;
}
