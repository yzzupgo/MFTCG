#include<bits/stdc++.h>
#define ll long long
#define MOD = 1e9+7
#define rep(i,n) for(int i=0;i<(n);++i)
const double PI=3.14159265358979323846;
const int INF = 1001001001;
using namespace std;
int main(){
int x,y;
cin >> x >> y;
rep(i,x){
if(2*i + (x-i) == y/2){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
