#include<iostream>
using namespace std;
int main()
{
int a , b ;
cin >> a >> b;
if(a>1 && b >1 ) cout << a*b << endl;
else if( b<0) cout << a-b << endl;
else cout << a+b << endl;
return 0;
}
