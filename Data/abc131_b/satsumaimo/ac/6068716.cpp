#include<bits/stdc++.h>
using namespace std;
int main(){
int N,L;
cin >> N >> L;
int a=N*(N+1)/2+N*(L-1);
if(L>0){
cout << a-L << endl;
}
if(L<=0&&-1*N<L){
cout << a << endl;
}
if(L<=-1*N){
cout << a-L-N+1 << endl;
}
}
