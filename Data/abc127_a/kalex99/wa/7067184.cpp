#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
int a, b;
cin >> a >> b;
if (a < 5) cout << 0 << endl;
else if(a < 13) cout << b/2 << endl;
else cout<< b << endl;
return 0;
}
