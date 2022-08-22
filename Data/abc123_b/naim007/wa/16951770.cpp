#include<bits/stdc++.h>
#include<string>
typedef long long ll;
#define  fi0(i,n)  for(int i=0;i<n;i++)
#define   pb()    push_back()
#define   mk()    make_pair()
#define   fst      first
#define   scnd    second
#define   fast    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define   endl     '\n';
using namespace std;
ll fast_power(ll n,ll k,ll p){
    ll ans=1;
    while(k){
        if(k&1){
            ans=(ans*n%p);k--;
        }
        else{
            n=(n*n%p);k/=2;
        }
    }
    return ans%p;
}
int mege(int *a,int *b,int high1,int high2,int low1,int low2)
{
    int test[high1+high2];int loww=0;
    while(low1<high1&&low2<high2){
        if(a[low1]<b[low2])
        test[loww++]=a[low1++];
        else
            test[loww++]=b[low2++];
    }
    while(low1<high1)test[loww++]=a[low1++];
    while(low2<high2)test[loww++]=b[low2++];
    cout<<test[0];
    for(int i=1;i<sizeof(test)/sizeof(test[0]);i++)
        cout<<' '<<test[i];
    cout<<endl;
}
void large_factorial(ll n){
    ll a[2*100000];
    fill(a,a+1000,-1);
    for(int i=0;i<100;i++)cout<<a[i]<<endl;
}
void f(){
    int a[5];
    fi0(i,5)cin>>a[i];
    bool flag=0;
    int x=10,y,z;
   fi0(i,5){
       int d=a[i]%10;
       if(d<x&&d!=0){
        y=i;flag=1;
        x=d;
       }
    }
    int sum=0;
    fi0(i,5){
        if(i!=y){
            int d=a[i]%10;
        if(d!=0){
            sum+=(a[i]-(a[i]%10)+10);
        }
        else {
                sum+=a[i];
        }
    }
    }
    if(flag)sum+=a[y];
    cout<<sum<<endl;
}
int main()
{
   fast;
   f();
}
