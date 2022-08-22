#include <iostream>
using namespace std;
int main() {
int x;
int y;
cin>>x>>y;
if (y % 2 == 0 && y >= x*2 && y <= x*4)
{
cout<<"YES"<<endl;
}
else
cout<<"NO"<<endl;
return 0;
}
