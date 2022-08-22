#include <iostream>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
int sum = a+b,sub = a-b,multi = a*b;
if(sum>sub&&sum>multi){
cout<<sum;
}
else if(sub>sum&&sub>multi){
cout<<sub;
}
else {
cout<<multi;
}
return 0;
}
