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
{
cout << sum << endl;
cout << "The largest number among A+B =   " << sum << "  A-B=   " << diff << "   and, AxB =  " << mult << "   is =    " << sum;
}
else if (diff > sum && diff > mult)
{
cout << diff<<endl;
cout << "The largest number among A+B =   " <<sum<< "  A-B  =  " << diff<< "   AxB   =" << mult << "  is =  " << diff;
}
else
{
cout << mult<<endl;
cout << "The largest number among A+B =  " << sum << "  A-B =  " << diff << "  AxB =   " << mult<< "  is =  " << mult;
}
}
return 0;
}
