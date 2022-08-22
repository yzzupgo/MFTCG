#include <iostream>
using namespace std;
int main()
{
int a, b, wa, sa, seki;
cin >> a >> b;
wa = a + b;
sa = a - b;
seki = a * b;
if(wa < sa){
cout << sa << endl;
if(sa < seki){
cout << seki << endl;
}
}
else if(wa < seki){
cout << seki << endl;
if(seki < sa){
cout << sa << endl;
}
}
else{
cout << wa << endl;
}
}
