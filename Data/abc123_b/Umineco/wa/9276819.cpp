#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define p_q priority_queue
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

int main(){
    vector<ll> a(5);
    ll m,min=20,sum=0;
    for(int i=0;i<5;i++){
        cin>>a.at(i);
        m = a.at(i)%10;
        if(m>0){
            a.at(i) += 10-m;
        }
        if(min>m&&m!=0){
            min = m;
        }
        sum += a.at(i);
    }

    if(min==20){
        m = 0;
    }

    cout<<sum-(10-min)<<endl;

}

