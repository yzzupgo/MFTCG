#include<bits/stdc++.h>
using namespace std;
int main(){
int N,L;
cin >> N >> L;
int sum;
for(int i=0;i<N;i++){
sum += i+L-1;
}
if(-N<L and L<1) cout << sum << endl;
else if(L > 0) cout << sum - L << endl;
else cout << sum - (L + N -1) << endl;
}
