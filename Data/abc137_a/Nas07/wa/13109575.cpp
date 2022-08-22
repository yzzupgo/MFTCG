#include <iostream>
using namespace std;
int main()
{
int A, B, tmp1, tmp2, tmp3;
cin >> A >> B;
tmp1 = A + B;
tmp2 = A - B;
tmp3 = A * B;
if (tmp1 > tmp2 && tmp1 > tmp3)
{
cout << tmp1 << endl;
}
else if (tmp2 > tmp1 && tmp2 > tmp3)
{
cout << tmp2 << endl;
}
else
{
cout << tmp3 << endl;
}
}
