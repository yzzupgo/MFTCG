#include <iostream>
#include <vector>
using namespace std;
#define ll long long
int main(){
int n , l;
cin >> n >> l;
vector <int> v(n + 1);
for (int i = 1; i <= n; i++){
v[i] = l + i - 1;
}
int mn = 10000;
int Fl = 0;
for (int i = 1; i <= n; i++){
Fl += v[i];
if (mn > abs(v[i])){
mn = v[i];
}
}
cout << Fl - mn << endl;
return 0;
}
