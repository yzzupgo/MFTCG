#include <iostream>
using namespace std;
int main()
{
int age,B;
cin>>age>>B;
if(age>=0&&age<=100&&B>=2&&B%2==0&&B<=100){
if(age>=13){cout<<B;}
else if (age>=6&&age<=12){
cout<<B/2;
}
else {cout<<0;}}
else{
return 0;}
}
