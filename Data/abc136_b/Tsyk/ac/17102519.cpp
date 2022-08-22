#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
int main(){
int n; cin >> n;
long long ans = 0;
for (int i=1; i <= n; i++){
if(to_string(i).length()%2==1) ans++;
}
cout << ans << endl;
}
