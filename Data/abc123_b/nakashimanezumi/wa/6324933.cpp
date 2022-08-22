#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<utility>
#include<map>
#include<set>
#include<string>

using namespace std;
#define ll long long

int main(){
    ll a[5],k,sum = 0;
    ll tmp =10;
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    for(int i = 0; i < 5; i++){ 
        if(min(a[i]%10, tmp) && a[i]%10 != 0){
            tmp = a[i] % 10; 
        } 
        if(a[i]%10 == 0)sum += a[i]; 
        else sum += a[i] + (10 - a[i]%10);
    }
    
    if(tmp != 10){
        cout << sum - (10 - tmp) << endl;
    }else{
        cout << sum << endl;   
    }
}
