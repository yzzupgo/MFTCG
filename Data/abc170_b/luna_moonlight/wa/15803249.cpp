#include <iostream>
using namespace std;
int main() {
int x,y;
cin>>x>>y;
for (int i=0;i<=x;i++){
if (i*2+(x-1)*4==y) {
cout<<"Yes"<<endl;
goto loopend;
}
}
cout<<"No"<<endl;
loopend:
return 0;
}
