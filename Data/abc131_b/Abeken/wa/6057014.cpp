#include <iostream>
using namespace std;
int n, l;
int main(){
cin >> n >> l;
if (0 < l) cout << (n-1)*(2*l+n)/2;
else if (l+n-1 < 0) cout << (n-1)*(2*l+n-2)/2;
else cout << (n-1)*(2*l+n-1)/2;
}
