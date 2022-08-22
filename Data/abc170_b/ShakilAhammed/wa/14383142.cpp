#include<iostream>
#include <cmath>
using namespace std;
int main()
{
int n, legs;
cin>>n>>legs;
if (legs % 2 == 0 &&(pow(2, n) <= legs && pow(4, n) >= legs)) {
cout<<"Yes"<<endl;
}
else {
cout<<"No"<<endl;
}
return 0;
}
