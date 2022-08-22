#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define INF (1LL<<50)
#define MOD 1000000007
int main(){
int X,Y;
cin >> X >> Y;
for(int i=0;i<=X;i++){
for(int j=0;i+j<=X;j++){
if(i+j==X&&2*i+4*j==Y){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
