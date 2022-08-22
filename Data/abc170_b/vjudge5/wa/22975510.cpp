#include <iostream>
using namespace std;
int main()
{
int X, Y;
cin>>X>>Y;
bool bb=false;
if((X>=1 && X<=100) && (Y>=1 && Y<=100)){
for(int i = 0; i<=X && !bb;i++){
for(int j=0;j<=X;j++){
if((2*i+4*j)==Y){
cout<<"Yes"<<endl;
bb = true;
}
}
}
if(!bb) cout<<"No"<<endl;
}
}
