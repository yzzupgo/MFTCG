#include <bits/stdc++.h>
using namespace std;
int main() {
int A,B;
cin >>A >>B;
if(A >=13){
cout <<B <<endl;
}
else if (5 <A && A <13){
cout <<B / 2 <<endl;
}
else {
cout << 0 <<endl;
}
}
