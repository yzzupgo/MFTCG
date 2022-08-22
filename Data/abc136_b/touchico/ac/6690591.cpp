#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
if(n < 10){
cout << n << endl;
}
else if(10 <= n && n < 100){
cout << 9 << endl;
}
else if(n >= 100 && n < 1000){
cout << n-90 << endl;
}
else if(n >=1000 && n<10000){
cout << 909 << endl;
}
else if(n >= 10000 && n < 100000){
cout << n - 9090 << endl;
}
else {
cout << 90909 << endl;
}
return 0;
}
