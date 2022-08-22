#include <iostream>
using namespace std;
int main()
{
int N, L;
cin >> N;
cin >> L;
int taste = 0;
int min;
int a;
for ( int i = 0; i < N; i ++ ) {
a = L + i ;
taste += a;
if ( i == 0 ) {
min = a;
} else {
if ( min > a ) min = a;
}
}
taste -= min;
cout << taste << endl;
return 0;
}
