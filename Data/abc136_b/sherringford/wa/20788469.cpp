#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
if (n<9){
cout << n << endl;
}
else if (9<=n<=99){
cout << 9 << endl;
}
else if (100<=n<=9999){
cout << 909 << endl;
}
else if (10000<=n<=999999){
cout << 90909 << endl;
}
}
