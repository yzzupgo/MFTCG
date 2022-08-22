#include <iostream>
using namespace std;
int main(){
int n, l, sum = 0, mn = int(1e9);
cin >> n >> l;
for(int i=1; i<=n; ++i){
sum += l + i - 1;
if (mn > abs(l + i - 1))
mn = l + i - 1;
}
cout << sum - mn;
}
