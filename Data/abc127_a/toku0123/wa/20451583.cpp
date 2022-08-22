#include <iostream>
using namespace std;
int main(){
int A, B;
cin >> A >> B;
if(B >= 13)cout << B << endl;
else if(B>=6 && B<=12) cout << B/2 << endl;
else cout << 0 << endl;
return 0;
}
