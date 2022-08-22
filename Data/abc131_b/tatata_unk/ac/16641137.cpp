#include<bits/stdc++.h>
#define rep(i,n) for (int i=0;i<(n);i++)
#define PI 3.14159265358979323846264338327950L
using namespace std;
using P = pair<int,int>;
using ll = long long;
using namespace std;
char in[120];
pair<pair<string,int>,int> p[110];
int main(){
int n, l;
cin >> n >> l;
int mini= 10000000;
for(int i = l; i < l+n; ++i){
mini = min(abs(i), mini);
}
int sum = 0;
for(int i = l; i < l+n; ++i){
if(i == mini){continue;}
sum += i;
}
if(l+n<=0){cout << sum-(l+n-1) << endl;}
else{cout << sum << endl;}
return 0;
}
