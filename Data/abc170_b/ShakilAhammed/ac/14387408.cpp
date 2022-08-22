#include<iostream>
#include <cmath>
using namespace std;
int main()
{
int n, legs;
cin>>n>>legs;
for(int a = 0; a <= n; ++a) {
int b = n - a;
if ((2 * a + 4 * b) == legs) {
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
return 0;
}
