#include <bits/stdc++.h>
using namespace std;
void setup()
{
ifstream in("./input.txt");
cin.rdbuf(in.rdbuf());
cin.tie(0);
ios::sync_with_stdio(false);
}
int main()
{
int A, B;
cin >> A;
cin >> B;
int plus = A + B;
int minus = A - B;
int multiple = A * B;
int max = plus;
if (max < minus)
{
max = minus;
}
else if (max < multiple)
{
max = multiple;
}
cout << max << endl;
return 0;
}
