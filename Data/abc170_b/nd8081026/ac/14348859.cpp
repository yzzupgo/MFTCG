#include <iostream>
using namespace std;
int main()
{
int x,y;
double a;
cin>>x>>y;
a = (double) y/x;
if(a<=4 && a>=2 && y>x && y%2==0){
cout<<"Yes";
}
else{
cout<<"No";
}
return 0;
}
