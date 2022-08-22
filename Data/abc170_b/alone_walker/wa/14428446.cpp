#include <iostream>
using namespace std;
int main() {
int x,y;
cin>>x>>y;
cout<<((y-2*x)%2==0 && ((y-2*x)/2<=0 && (y-2*x)/2>=0)?"Yes":"No")<<"\n";
return 0;
}
