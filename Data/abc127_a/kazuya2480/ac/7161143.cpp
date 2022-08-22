#include<iostream>
#include<string>
using namespace std;
int main()
{
int a;
int b;
cin >> a;
cin >> b;
if(a >= 13){
cout<<b<<endl;
}else if(a >= 6 && a <= 12){
cout<<b / 2<<endl;
}else{
cout<<"0"<<endl;
}
}
