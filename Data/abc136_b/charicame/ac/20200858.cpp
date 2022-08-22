#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<numeric>
using namespace std;
using lint = long long;
#define PI acos(-1)
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
int main(){
int n;cin >> n;
int cnt=0;
for(int i=1;i<=n;i++){
if(10<=i && i<100) continue;
else if(1000<=i && i<10000) continue;
else if(100000<=i && i<1000000) continue;
else cnt++;
}
cout << cnt << endl;
return 0;
}
