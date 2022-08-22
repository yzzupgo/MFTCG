#include <bits/stdc++.h>
using namespace std;
int main(){
int N,L;
cin >> N >> L;
int a=N*(2*L+N-1)/2-L;
int b=N*(2*L+N-1)/2;
int c=N*(2*L+N-1)/2-L-N+1;
if(L>0){
cout << a << endl;
}else if(L<0&&abs(L)<N){
cout << b << endl;
}else{
cout << c << endl;
}
}
