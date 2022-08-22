#include <iostream>
#include <cmath>
#include <cstdio>
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int change(ll n){
    if(n%10==0){
        return n;
    }else{
        ll i=n/10;
        return (i+1)*10;
    }
}

int main(){
    ll a[5];
    ll ans=0;
    ll k=10;
    for(int i=0;i<5;i++){
        cin>>a[i];
        ans+=change(a[i]);
        if(a[i]%10!=0){
            k=min(a[i]%10,k);
        }
    }
    cout<<ans-(10-k)<<endl;
}