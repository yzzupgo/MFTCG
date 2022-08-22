#include <bits/stdc++.h>
using namespace std;
int main(){
int N,L;
cin >> N >> L;
int a=N*(2*L+N-1)/2-L;
int b=N*(2*L+N-1)/2-L-N+1;
int c=N*(2*L+N-1)/2;
if(L>0){
cout << a << endl;
}else if(L+N-1<0){
cout << b << endl;
}else{
cout << c << endl;
}
}
