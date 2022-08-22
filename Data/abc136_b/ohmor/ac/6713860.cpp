#include <iostream>
#include <cmath>
using namespace std;
int main() {
int n, k;
cin >> n;
k = log10(n);
int odd = 0;
for (int i = 0; i <= k; i++) {
if (i%2==0 && i!=k){
odd += (10 * pow(10, i)) - (1 * pow(10, i));
}if (i%2==0 && i==k) {
odd+= n - pow(10, i) + 1;
}
}
cout << odd << endl;
return 0;
}
