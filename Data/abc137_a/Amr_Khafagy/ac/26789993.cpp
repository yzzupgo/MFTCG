#include <iostream>
using namespace std;
int main()
{
int A,B,sum,sub,mul;
cin>>A>>B;
sum=A+B;
sub=A-B;
mul=A*B;
if(sum>=sub&&sum>=mul){
cout<<sum<<endl;
}else if(sub>=sum&&sub>=mul){
cout<<sub<<endl;
}else if(mul>=sum && mul>=sub){
cout<<mul<<endl;
}
return 0;
}
