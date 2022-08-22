#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int A, B;
int main()
{
cin >> A >> B;
if(A >=13){
cout << B << endl;
} else if (A>=6 && A <=12 ){
cout << B/2 << endl;
} else {
cout << "0" << endl;
}
return 0;
}
