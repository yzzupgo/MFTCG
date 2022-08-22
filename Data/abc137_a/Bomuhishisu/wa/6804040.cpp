#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
int a,b,tasu,hiku,kake;
cin >> a >> b;
tasu = a + b;
hiku = a - b;
kake = a * b;
if( tasu > hiku && tasu > kake )
{
cout << tasu << endl;
}else if( hiku > tasu && hiku > kake )
{
cout << hiku << endl;
}else{
cout << kake << endl;
}
return 0;
}
