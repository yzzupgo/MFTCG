#include<iostream>
using namespace std;
int main(){
int X,Y;
cin>>X>>Y;
int N=4*X-Y;
if(N>=0 && N%2==0 && N/2<=X){
cout<<"Yes";
}else{
cout<<"No";
}
return 0;
}
