#include <bits/stdc++.h>
using namespace std;
int main(void){
int N,L;
cin >> N >> L;
if(L > 0){
cout << (N-1)*(L+1+L+N-1)/2 << endl;
}
else if(L == 0){
cout << (N-1)*(L+L+N-1)/2 << endl;
}
else if(L < 0 && L + N >= 0){
cout << (N-1)*(L+L+N-1)/2 << endl;
}
else cout << (N-1)*(L+L+N-2)/2 << endl;
}
