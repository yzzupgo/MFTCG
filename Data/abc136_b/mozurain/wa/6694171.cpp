#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
int N;
cin >> N;
if (N < 10) {
cout << N;
}
else if(N>=10&&N<=99){
cout << 9;
}
else if (N >= 100 && N <= 999) {
cout << 9 + (N / 100 - 1) * 100 + N % 100 + 1;
}
else if (N >= 1000 && N <= 9999) {
cout << 909;
}
else if (N >= 10000 && N<=99999) {
cout << 909 + (N / 1000 - 1) * 1000 + N % 1000 + 1;
}
else {
cout << 90909;
}
return 0;
}
