#include<iostream>
using namespace std;
int main(){
int A,B;
cin>>A>>B;
int s=A-B;
int d=A+B;
int c=A*B;
if(s>d&&s>c)
cout<<s;
else if(d>s&&d>c)
cout<<d;
else if(c>d&&c>s)
cout<<c;
return 0;
}
