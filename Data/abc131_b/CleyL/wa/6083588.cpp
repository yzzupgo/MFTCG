#include <iostream>
using namespace std;
int main(){
int n,a;cin>>n>>a;
int sm = 0;
int mn = 100000;
for(int i = 0; n > i; i++){
sm += a+i;
if(abs(a+i) < abs(mn)){
mn = a+1;
}
}
cout << sm-mn << endl;
}
