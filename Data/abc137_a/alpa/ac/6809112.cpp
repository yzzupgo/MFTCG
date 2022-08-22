#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <math.h>
#include <cstdint>
#include <cstring>
using namespace std;
int main()
{
int A, B;
cin >> A >> B;
int PLS = A + B;
int MNS = A - B;
int MLT = A * B;
int MAX = 0;
if (PLS > MNS){
MAX = PLS;
}
else{
MAX = MNS;
}
if (MLT > MAX){
MAX = MLT;
}
cout << MAX << endl;
return 0;
}
