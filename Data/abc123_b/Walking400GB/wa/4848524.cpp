#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <queue>
#include <numeric>

using namespace std;

typedef long long int ll;
typedef long int li;

bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}

int main(){
    ll ans=0;
    ll a[5];
    for(int i=0;i<5;i++)cin >> a[i];
    ll x=1111;
    for(int i=0;i<5;i++){
        if((a[i]%10)!=0)x=min((a[i]%10),x);
    }
    for(int i=0;i<5;i++){
        if(a[i]%10!=0)a[i]=(10-(a[i]%10))+a[i];
    }
    for(int i=0;i<5;i++){
        ans+=a[i];
    }
cout << ans-10+x << endl;
    return 0;
}

