#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <stdio.h>
#define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;
using namespace std;
int main(){
ll N,L;
cin >> N >> L;
if(L<0){
if(L+N-1<0){
cout << (2*L+N-2)*(N-1)/2 << endl;
}
else{
cout << (2*L+N-1)*N/2 << endl;
}
}
else{
cout << (2*L+N-1)*N/2-L <<endl;
}
return 0;
}
