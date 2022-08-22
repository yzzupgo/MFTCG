#include <iostream>
using namespace std;
int main()
{
int age,B;
cin>>age>>B;
if(age>=13){cout<<B;}
else if (age>=6&&age<=12){
cout<<B/2;
}
else {cout<<0;}
return 0;
}
