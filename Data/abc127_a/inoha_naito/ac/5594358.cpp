#include <bits/stdc++.h>
using namespace std;
int main() {
int A, B;
cin>>A>>B;
if(A<=5) {
B = 0;
} else if(A>=6 && A<=12) {
B = B / 2;
} else {
B = B;
}
cout<<B<<endl;
return 0;
}
