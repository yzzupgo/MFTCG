#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
if (n < 10){
cout << n << endl;
}
else if (n < 100){
cout << 9 << endl;
}
else if (n < 1000){
cout << n - 100+ 1 + 9 << endl;
}
else if (n < 10000){
cout << 909 << endl;
}
else{
cout << n - 10000 + 1 + 909 << endl;
}
}
