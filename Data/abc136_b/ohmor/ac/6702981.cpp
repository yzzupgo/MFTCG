#include <iostream>
#include <cmath>
using namespace std;
int main() {
int n, k;
cin >> n;
k = log10(n);
string s;
s = to_string(n);
int a[k+1];
for (int i = 0; i <= k; i++) {
a[i] = int(s[i] - '0');
}
int odd = 0;
for (int i = 1; i <= k; i++) {
if (i%2==0 && i!=k){
odd += (10 * pow(10, i)) - (1 * pow(10, i));
}if (i%2==0 && i==k) {
odd+= n - pow(10, i) + 1;
}
}
if (n >=10){
odd+=9;
} else{
odd+=n;
}
cout << odd << endl;
return 0;
}
