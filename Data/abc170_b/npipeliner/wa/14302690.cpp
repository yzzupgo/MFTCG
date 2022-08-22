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
if( (4*x-y) <= 200 && (4*x-y) > 0 && (4*x-y)%2 == 0 ){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
return 0;
}
