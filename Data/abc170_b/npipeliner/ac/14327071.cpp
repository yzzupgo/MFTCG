#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long;
#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))
ll u18 = 1000000000000000000;
int main()
{
int x, y;
cin >> x >> y ;
if( y%2 == 0 ){
if( (2*x-y/2) >= 0 && (y/2-x) >= 0 ){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
}
else{
cout << "No" << endl;
}
return 0;
}
