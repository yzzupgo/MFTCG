#include <iostream>
using namespace std;
int main() {
int n, l, sum;
cin >> n >> l;
if (l >= 0) {
sum = l * (n - 1) + (n - 1) * n / 2;
}else{
if (-l <= n){
sum = l * n + (n - 1) * n / 2;
} else {
sum = l * n + (n - 1) * n / 2 - (l + n -1);
}
}
cout << sum << endl;
return 0;
}
