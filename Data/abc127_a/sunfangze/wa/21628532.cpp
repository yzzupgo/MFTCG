#include<iostream>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
if(b>=13){
cout<<a;
}
else if(a>=6&&a<=12){
cout<<(b/2);
}
else{
cout<<0;
}
return 0;
}
