#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
if(n <= 99){
cout << 9 <<endl;
}
else if(n <= 999 && n >= 100){
cout << n - 90 << endl;
}
else if(n >= 1000 && n <= 9999){
cout << 909 << endl;
}
else if(n >= 10000 && n <= 99999){
cout << n - 9090 << endl;
}
else{
cout << 90909 << endl;
}
}
