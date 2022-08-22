#include <bits/stdc++.h>
using namespace std;
int main() {
int A,B;
cin >> A >> B;
if(A < 12){
cout << B << endl;
}
if(A > 13){
cout << B / 2 << endl;
}
else{
cout << 0 << endl;
}
}
