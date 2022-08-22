#include<bits/stdc++.h>
using namespace std;
int main() {
int N,L;
cin >> N >> L;
int Minus;
if(L <= 0 && 0 <= L+N-1) {
Minus = 0;
}else if(L+N-1 <= 0){
Minus = L+N-1;
}else{
Minus = L;
}
int Total = 0;
for(int i = 0; i < N; i++) {
Total += L+i;
}
cout << Total - Minus << endl;
}
