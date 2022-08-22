#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <set>
using namespace std;
typedef long long ll;
int main(){
int A,B;
cin >> A >> B;
if(A<5) cout << 0 << endl;
else if(A<13) cout << B/2 << endl;
else cout << B << endl;
}
