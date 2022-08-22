#include <bits/stdc++.h>
using namespace std;
int main() {
int A,B,C;
cin>>A>>B>>C;
vector<int> V(3);
V={A+B,A-B,A*B};
sort(V.begin(),V.end());
cout<<V.at(0)<<endl;
}
