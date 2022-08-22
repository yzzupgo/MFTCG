#include<iostream>
using namespace std;
int main()
{
int a,b;
cin >> a >> b;
if(b % 2 == 1){
cout << "No";
return 0;
}
if(a * 2 > b){
cout << "No";
return 0;
}
if(a * 4 >= b){
cout << "Yes";
return 0;
}
cout << "No";
return 0;
}
