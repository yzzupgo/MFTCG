#include<iostream>
using namespace std;
int absolute(int);
int main() {
int N,L,ans;
cin >> N >> L;
if(-N<L && L<1)ans = 1-L;
else if(0<L)ans = 1;
else ans = N;
cout << ans << endl;
cout << (2*L+N-1)*N/2-L-ans+1 << endl;
}
