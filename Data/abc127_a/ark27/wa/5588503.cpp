#include <bits/stdc++.h>
using namespace std;
#define FOR(i,nn) for(int i=0;i<nn;i++)
#define MOD 1000000007
typedef long long ll;
template <class T> inline bool chmax(T& a,T b){if(a<b){a=b;return 1;}else{return 0;}}
template <class T> inline bool chmin(T& a,T b){if(a>b){a=b;return 1;}else{return 0;}}
template <class T> inline T GCD(T a,T b){T c;while(b!=0){c=a%b;a=b;b=c;}return a;}
template <class T> inline T LCM(T a,T b){return a*b/GCD(a,b);}
int main(){
int a,b;
cin >> a >> b;
if(a>13){
cout << b << endl;
}else if(a>6){
cout << b/2 << endl;
}else{
cout << 0 << endl;
}
}
