#include <iostream>
#include <cmath>
#include <limits>
#include <vector>
using namespace std;
bool is_integer(long double Num){
return floor(Num) == Num;
}
int main(){
long long N,L;
cin >> N >> L;
vector < int > Fl(N);
long long Fln = 0;
long long mn = -1000;
for (long long i = 0; i < N; i++){
Fl[i] = L + i;
Fln += Fl[i];
if (abs(mn) > abs(Fl[i]))
mn = abs(Fl[i]);
}
cout << Fln - mn << endl;
return 0;
}
