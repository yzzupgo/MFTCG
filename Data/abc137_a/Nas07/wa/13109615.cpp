#include <iostream>
using namespace std;
int main(void)
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
else if (tmp3 > tmp1 && tmp3 > tmp2)
{
cout << tmp3 << endl;
}
}
