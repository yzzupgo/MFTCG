#include <iostream>
using namespace std;
int main()
{
int A, B, sum, diff, mult;
cin >> A>>B;
if ((A >= -100 && A <= 100) && (B >= -100 && B <= 100)) {
{
sum = A + B;
diff = A - B;
mult = A * B;
}
if (sum > diff && sum > mult)
cout << sum ;
else if (diff > sum && diff > mult)
cout << diff;
else
cout << mult;
}
return 0;
}
