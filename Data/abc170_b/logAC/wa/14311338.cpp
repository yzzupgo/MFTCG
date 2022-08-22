#include <iostream>
using namespace std;
int main(void)
{
int tou, jiao;
cin >> tou >> jiao;
if (tou * 2 > jiao) { cout << "No"; return 0; }
if (tou * 4 < jiao) { cout << "No"; return 0; }
cout << "Yes";
return 0;
}
