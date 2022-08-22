#include <iostream>
using namespace std;
int main() {
int x,y,xx;
cin>>x>>y;
xx=2*x;
y=y-xx;
if(y>=0&y%2==0&y/2<=x){cout<<"Yes";}else{cout<<"No";}
}
