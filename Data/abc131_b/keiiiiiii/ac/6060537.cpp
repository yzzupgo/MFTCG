#include <bits/stdc++.h>
using namespace std;
int main() {
int n,l,sum = 0;
cin >> n >> l;
for(int i = 0; i < n; ++i){
sum += i + l;
}
if(l >= 0){
cout << sum - l << endl;
}
else if(n > l * -1){
cout << sum << endl;
}
else{
cout << sum - (l + n - 1) << endl;
}
}
