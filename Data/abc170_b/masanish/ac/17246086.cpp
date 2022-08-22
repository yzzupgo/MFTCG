#include <iostream>
using namespace std;
typedef long long ll;
#define rep(i,n) for(i=0;i<(n);i++)
int main()
{
int x,y,a,b;
cin >> x >> y;
a = y-2*x;
b = x-a/2;
if( a >= 0 && a % 2 == 0 && b >= 0){
cout << "Yes";
}else{
cout << "No";
}
cout << endl;
}
