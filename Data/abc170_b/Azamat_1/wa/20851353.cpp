#include<iostream>
using namespace std;
int main()
{
int x, y, l = 0, m = 0;
cin >> x >> y;
if((4 * x - y) % 2 != 0){
cout << "No" << endl;
return 0;
}
l = (4 * x - y) / 2;
m = x - l;
if(m <= 0 || l <= 0){
cout << "No" << endl;
return 0;
}
cout << "Yes" << endl;
return 0;
}
