#include<iostream>
using namespace std;
int main(){
int x,y;
cin >> x >> y;
int a;
a=y-x*2;
if(a%2==0 && (a/2)<=x)
cout << "Yes" << endl;
else
cout << "No" << endl;
return 0;
}
