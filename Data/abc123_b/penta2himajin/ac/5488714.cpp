#include<iostream>
#include<iomanip>
#include<numeric>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<unordered_map>
#include<stack>
#include<queue>
#include<ctype.h>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<utility>
#define For(a,b) for(int i=(a);i<(b);i++)
#define Rep(n) for(int i=0; i<(n); ++i)
int gcd(int a,int b){return b?gcd(b,a%b):a;}
int lcm(int a,int b){return a*b/gcd(a,b);}
using namespace std;
typedef long long ll;//int64
typedef unsigned long long ull;
//----------program from here----------

int main(){
    int ans=0,mn=10;
    for(int i=0,T;i<5;++i){
        cin >> T;
        if(T%10){
            mn=min(mn,T%10);
            T=(T/10+1)*10;
        }
        ans += T;
    }
    cout << ans - (10-mn) << endl;
}