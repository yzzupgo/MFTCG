#include <iostream>
#include <string>
#include<stdlib.h>
#include <cassert>
using namespace std;
int main() {
int x,y;cin>>x>>y;
if(x%2==0&&y%2==!0)
cout<<"No\n";
else if(x%2==!0&&y%2==!0)
cout<<"No\n";
else if(y>=2*x&&y<=4*x)
cout<<"Yes\n";
return 0;
}
