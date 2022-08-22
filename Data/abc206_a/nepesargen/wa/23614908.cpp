#include <iostream>
using namespace std;
int main() {
long long n;
cin >> n;
for(long long i = 1; i < 1000000000; i++) {
if((i * (i + 1) / 2) >= n) {
cout << i << endl;
break;
}
}
return 0;
}
