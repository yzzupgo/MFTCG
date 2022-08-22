#include <iostream>
using namespace std;
int main()
{
int N, L;
cin >> N >> L;
int taste = 0;
int minabs = 1000;
for ( int i = 1; i <= N; i ++ ) {
taste += (L + i - 1);
if ( abs(L + i - 1) < abs(minabs) ) minabs = L+i-1;
}
taste -= minabs;
cout << taste << endl;
return 0;
}
