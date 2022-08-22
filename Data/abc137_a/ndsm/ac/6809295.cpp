#include <bits/stdc++.h>
using namespace std;
int main() {
int A,B,a,b,c;
cin >> A >> B;
a=A+B;
b=A-B;
c=A*B;
vector<int> AA(3);
AA.at(0)=a;
AA.at(1)=b;
AA.at(2)=c;
sort(AA.begin(), AA.end());
cout << AA.at(2) << endl;
}
