#include <bits/stdc++.h>
using namespace std;
int main(){
int N,L;
cin >> N >> L;
int a=N*(2*L+N-1)/2-L;
int b=N*(2*L+N-1)/2-L-N+1;
if(2*L>(1-N)){
cout << a << endl;
}else if(2*L==(1-N)){
cout << 0 << endl;
}else{
cout << b << endl;
}
}
