#include <iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<cctype>
#include<queue>
#include<deque>
#include<regex>
#include<stack>
#include<stdio.h>
#include<vector>
#include<set>
#include<map>
#include<iomanip>
#define rep(i,n) for(int i=0;i<n;i++)
typedef int long long ll;
using namespace std;
typedef pair<int,int> P;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
const ll MOD=1e9+7;
static const int MAX = 100;
static const int INF = (1<<23);
template<class T> T gcd(T a, T b){return b? gcd(b,a%b) : a;}
template<class T> T lcm(T a,T b){return a / gcd(a,b)*b;}
int main(){
int x,y;
cin>>x>>y;
int kame = 0;
while(true){
if(y>=kame*4) {
int c = y - kame * 4;
if ((c) % 2 == 0 && c >= 0) {
if (c / 2 == (x - kame)) {
cout << "Yes" << endl;
return 0;
}
}
}
kame++;
if(kame>100){break;}
}
cout<<"No"<<endl;
return 0;
}
