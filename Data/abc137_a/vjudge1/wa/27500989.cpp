#include <iostream>
using namespace std;
int main()
{
int A;
int B;
cin >> A >> B;
if ((A * B) >= (A + B) && (A * B)>= (A - B))
cout << A * B << "/n";
else if ((A + B) >= (A * B) && (A + B )>= (A - B))
cout << A + B << "/n";
else
cout << A - B << "/n";
return 0;
}
