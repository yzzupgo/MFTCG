#include<iostream>
using namespace std;
int main(){
int A,B;
cin>>A>>B;
int c,d,e;
c=A+B;
d=A-B;
e=A*B;
if(d<=c&&e<=c) cout<<c<<endl;
else if(c<=d&&e<=d) cout<<d<<endl;
else cout<<e<<endl;
return 0;
}
