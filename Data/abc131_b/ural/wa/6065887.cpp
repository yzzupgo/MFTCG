#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main() {
int N;
int L;
cin >> N >> L;
int abs_min = abs(L);
int min;
int taste;
int t_total = 0;
for(int i=1;i<=N;i++) {
taste = L+i-1;
if(abs_min > abs(taste)) {abs_min = abs(taste); min = taste;}
t_total += taste;
}
t_total = t_total - min;
cout << t_total << endl;
return 0;
}
