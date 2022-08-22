#include<iostream>
using namespace std;
int absolute(int);
int main() {
int N,L;
cin >> N >> L;
if(-N<L && L<1)cout << 1-L << endl;
else if(0<L)cout << 1 << endl;
else cout << N << endl;
}
