#include <iostream>
using namespace std;
int main() {
int x,y; cin>>x>>y;
cout<<((y%2==0&&2*x<=y&&y<=4*x)?"Yes":"No")<<endl;
}
