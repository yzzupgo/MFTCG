#include "bits/stdc++.h"
typedef long long ll;
using namespace std;
int main() {
int A,B,res;
cin >> A >> B;
if (A>13) {
cout << B << endl;
}
else if(A>6){
cout << B/2 << endl;
}
else {
cout << "0" << endl;
}
}
