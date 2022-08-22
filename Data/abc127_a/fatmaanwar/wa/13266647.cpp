#include <iostream>
using namespace std;
int main()
{ int B=100;
int age;
cin>>age;
if(age>=0&&age<=100){
if(age>=13){
cout<<B;
}
else if (age>=6&&age<=12){
cout<<B/2;
}
else if (age<=5){
cout<<0;
}}
return 0;
}
