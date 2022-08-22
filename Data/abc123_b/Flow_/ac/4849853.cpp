#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <numeric>
#include <map>
#include <list>
#include <queue>
#include <cstdlib>
#define INF (1000000007)
#define distance(x1,y1,x2,y2) sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
#define rep(i,N) for(ll i=0;i<N;i++)
#define rep2(i,j,k) for(ll i=j; i<k;i++)
typedef long long int ll;
using namespace std;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
using vi=vector<int>;
using vvi=vector<vector<int>>;
using vs=vector<string>;
using vvs=vector<vector<string>>;

template <typename T>
void print(T v){
    for(size_t i=0;i<v.size();i++){
        cout<<i<<": "<<v[i]<<endl;}
}

template <typename T>
void print2(T v){
    for(size_t i=0;i<v.size();i++){
        cout<<i<<": ";
        for(size_t j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

template <typename T>
T slice(T v,ll left,ll right){
    T ret(0);
    copy(v.begin()+left,v.begin()+right,back_inserter(ret));
    return ret;
}

bool func(vl s,vl t){
    return s[1]<t[1];
}

int main(){
    
    vl vec(5);
    rep(i,5){
        cin>>vec[i];
    }
        
    ll sum=0;
    ll max=0;
    ll t;
       
    rep(i,5){
        t=vec[i]%10;
        if(t!=0){
            sum+=vec[i]+10-t;
        }
        else{
            sum+=vec[i];
        }
        
        if(t!=0 && max<10-t){
            max=10-t;
        }
    }
    
    cout<<sum-max<<endl;       
    
    return 0;
}