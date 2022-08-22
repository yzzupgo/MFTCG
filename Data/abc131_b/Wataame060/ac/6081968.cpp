#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
int n,l; cin >> n >> l;
vector< int > t;
int sum1 =0;
for(int i = 0; i < n; i++){
t.push_back(abs(l + (i + 1) - 1));
sum1 += l + (i + 1) - 1;
}
sort(t.begin(),t.end());
if(n + l <= 0) cout << sum1 + t[0] << endl;
else cout << sum1 - t[0] << endl;
return 0;
}
