#include <iostream>
using namespace std;
int main() {
int x,y;
cin>>x>>y;
int z=x+y;
int t=x-y;
int w=x*y;
if(z>t&&z>w){
cout<<z<<endl;
}
else if(t>z&&t>w){
cout<<t<<endl;
}
else{
cout<<w<<endl;
}
return 0;
}
