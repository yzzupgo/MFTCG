#include <bits/stdc++.h>
using namespace std;
int main(){
double N,L;
cin >> N >> L;
int a=N*(L+((N-1)/2))-L;
int b=N*(L+((N-1)/2))-L-N+1;
if(L>((1-N)/2)){
cout << a << endl;
}else if(L==((1-N)/2)){
cout << 0 << endl;
}else{
cout << b << endl;
}
}
