//#include<bits/stdc++.h>
//using namespace std;

// string convertToString(char* a, int size) 
// { 
//     int i; 
//     string s = ""; 
//     for (i = 0; i < size; i++) { 
//         s = s + a[i]; 
//     } 
//     return s; 
// }
// int add(string a,string b,int a1){
//     int count1=0;
//     // cout<<std::count(b.begin(), b.end(), '1')<<endl;
//     while(std::count(b.begin(), b.end(), '1')>=1){
//         count1++;
//         char u[a1];
        
//         for(int i=0;i<a1;i++){
//             u[i]=((a[i]-'0') ^ (b[i]-'0')) + '0';
//         }
       
//         char v[a1];
//         for(int i=0;i<a1;i++){
//             v[i]=((a[i]-'0') & (b[i]-'0')) + '0';
//         }
//         a = convertToString(u,a1);
//         string v1 = convertToString(v,a1);
//         v1.append("0");
//         a.insert(0,"0");
//         a1++;
//         b=v1;
//             // cout<<std::count(b.begin(), b.end(), '1')<<endl;
//     }
//     return count1;
// }
// int main(){
//     int t,i;
//     scanf("%d",&t);
//     for(i=0;i<t;i++){
//         string A,B;char g;
//         cin>>A;
//         cin>>B;
//          if(A.length()>B.length()){
//              int temp=A.length()-B.length();
//              for(int i=0;i<temp;i++){
//                  B.insert(0,"0");
//              }
//          }
//          else{
//               int temp=B.length()-A.length();
//              for(int i=0;i<temp;i++){
//                  A.insert(0,"0");
//              }
//          }
         
//          printf("%d\n",add(A,B,A.length()));
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() 
// {
//  long long i,a,b,max,k,t,q;
//   cin>>t;
//  while(t--)
// {
//     q=0;
//     max=1;k=1;
//      string s1,s2;
//      cin>>s1>>s2;
     
//     a=s1.size();b=s2.size();
  
    
// for(i=0;i<b;i++)
// {
//     if(s2[i]=='1')q=1;
// }
// if(q==0)
// {
//     cout<<0<<endl;
//     continue;
// }
// int min1=a<b?a:b;
// for(i=0;i<min1;i++)
// {
//     if(s1[a-1-i]=='1' && s2[b-1-i]=='1')
//     {
//      k++;   
//     }
//     if(k>1 && ((s1[a-1-i]=='0' && s2[b-1-i]=='1')||(s1[a-1-i]=='1' && s2[b-1-i]=='0')))
//     k++;
//     else if(k>1)
//     {
//        if(s1[a-1-i]=='1' && s2[b-1-i]=='1' ){if(k>max)max=k-1;k=2;}
//    else   
//        {if(k>max)max=k;k=1;}
//     }
   
// }
// if(k>max){max=k;}
// if(a<b)
// {
//     while(i<b && k>1)
//     {
//         if(s2[b-1-i]=='1')
//         k++;
//         else break;
//         i++;
//     }
// }
// if(k>max){max=k;}

// if(b<a)
// {
    
//     while(i<a && k>1)
//     {
//         if(s1[a-1-i]=='1')
//         k++;
//         else break;
//         i++;
//     }
// }
// if(k>max){max=k;}
//      cout<<max<<endl;
//  }
// 	return 0;
// }
#include<bits/stdc++.h>
#define ll long long int
#define get(x) cin>>x
#define loop(i,l,r) for(int i=l;i<r;i++)
#define F first
#define S second
#define pb push_back
#define p pair

using namespace std;


int num[16] = { 0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4 };

ll power(ll x, unsigned int y1)
{
    if (y1 == 0)
        return 1;
    else if (y1 % 2 == 0)
        return power(x, y1 / 2) * power(x, y1 / 2);
    else
        return x * power(x, y1 / 2) * power(x, y1 / 2);
}


unsigned int setBits(unsigned int nu)
{
    int nibble = 0;
    if (0 == nu)
        return num[0];

    nibble = nu & 0xf;
    return num[nibble] + setBits(nu >> 4);
}



int main()
{
    ll t; cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        ll n1=a.length(),n2=b.length();
        string s1="",s2="";
        if(n1<n2)
        {
            for(ll i=0;i<(n2-n1);i++)
                s1+='0';
            s1+=a;
            s2=b;
        }
        else if(n1>n2)
        {
            for(ll i=0;i<(n1-n2);i++)
                s2+='0';
            s2+=b;
            s1=a;
        }
        else{
            s1=a;
            s2=b;
        }
        ll c1=0;
        for(ll i=0;i<s2.length();i++)
        {
            if(s2[i]=='1')
                c1++;
        }
        if(c1==0)
        {
            cout<<"0\n";
            continue;
        }

        ll n=s1.length();
        vector<ll>v;
        for(ll i=n-1;i>=0;i--)
        {
            if(s1[i]=='1' && s2[i]=='1')
            {
                v.push_back(i);
                cout<<i<<endl;
            }
        }
        ll ans=0;
        for(ll i=0;i<v.size();i++)
        {
            ll j=v[i]-1;
            ll x=1;
            cout<<"j is : "<<j<<endl;
            while(true)
            {
                cout<<s1[j]<<endl;
                if(s1[j]!=s2[j])
                {
                    x++;
                }
                else{
                    break;
                }
                j--;
                if(j<0)
                    break;

            }
            ans=max(ans,x);
        }
        cout<<ans+1<<endl;
    }
    return 0;
}
