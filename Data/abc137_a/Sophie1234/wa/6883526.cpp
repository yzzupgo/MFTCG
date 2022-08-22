#include <iostream>
using namespace std;
int main(void){
int A,B;
cin >> A >> B;
int C,D,E;
C = A+B;
D = A-B;
E = A*B;
int ans;
if(C>D&&C>E)ans = C;
else if(D > C && D > E) ans = D;
else ans = E;
cout << ans << endl;
}
