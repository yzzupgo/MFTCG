#include <iostream>
#include <string.h>
using namespace std;
#define ll long long
int main() {
int a,b;
cin>>a>>b;
int x=a+b;
int y=a-b;
int z=a*b;
if (x>=y&&x>=z)
cout <<x;
else if (y>=x&&y>=z)
cout <<y;
else cout <<z;
}
