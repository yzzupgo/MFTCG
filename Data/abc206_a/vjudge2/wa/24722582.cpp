#include<iostream>
using namespace std;
int main() {
long long n;
cin >> n;
n = n * 1.08;
if(n < 206) {
cout << "Yay!" << endl;
}
if(n == 206) {
cout << "sos-sos" << endl;
}
if(n > 206) {
cout << ":(" << endl;
}
return 0;
}
