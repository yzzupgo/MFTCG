#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
int N;
cin >> N;
if (N < 10){
cout << N << endl;
}
if( (N>=10) && (N < 100)){
cout << 9 << endl;
}
if( (N>=100) && (N < 1000)){
cout << N % 100 + 1 + 9 << endl;
}
if( (N>=1000) && (N < 10000)){
cout << 909 << endl;
}
if( (N>=10000) && (N < 100000)){
cout << N % 10000 + 1 + 909 << endl;
}
if( N == 100000){
cout << 90909 << endl;
}
return 0;
}
