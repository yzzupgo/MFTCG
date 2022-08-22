#include<iostream>
using namespace std;
int main()
{
int A, B;
cin >> A >> B;
int sum, dif, prd;
sum = A + B;
dif = A - B;
prd = A * B;
if (sum - dif >= 0 && sum - prd >= 0){
cout << sum << endl;
}
else if ( dif - sum >= 0 && dif - prd >= 0){
cout << dif << endl;
}
else {
cout << prd << endl;
}
return 0;
}
