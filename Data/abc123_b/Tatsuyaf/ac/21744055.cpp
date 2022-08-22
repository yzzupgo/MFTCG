#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
#define vec(j,n) vector<int>j(n)
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using P = pair<int,int>;
const int INF = 100100100;

int main(){
    vector<int>a(5);
    vector<int>amari(5,0);
    int ans = 0;
    int b=INF;
    for(int i=0;i<5;i++){
        cin >> a.at(i);
        if(a.at(i)%10 == 0){
            ans += a.at(i);
        }
    }
    for(int i=0;i<5;i++){
        if(a.at(i) %10 !=0){
            amari.at(i)=a.at(i) %10;
            ans = ans + a.at(i) + 10 -amari.at(i); 
            b= min(b,amari.at(i));
        }
    }
    if(b==INF){
        b=10;
    }
    ans = ans - 10 +b;
    cout << ans << endl;

    return 0;
}