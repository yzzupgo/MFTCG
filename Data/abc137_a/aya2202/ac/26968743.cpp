#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int A,B;
cin >> A >> B ;
if (A+B >= A-B && A+B >= A*B )
cout << A+B ;
else if (A-B >= A+B && A-B >= A*B )
cout << A-B ;
else if (A*B >= A-B && A*B >= A+B )
cout << A*B ;
return 0;
}
