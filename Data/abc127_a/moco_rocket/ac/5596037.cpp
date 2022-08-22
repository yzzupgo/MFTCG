#include <iostream>
using namespace std;
int main() {
int A, B, ans;
cin >> A >> B;
ans = 0;
if(A > 12){
ans = B;
}else if(A > 5){
ans = B / 2;
}
cout << ans << endl;
}
