#include <bits/stdc++.h>
using namespace std;
int main(){
int A, B;
cin >> A >> B;
if (A+B >= A*B and A+B >= A-B){
cout << A+ B << endl;
}else if (A- B >= A+B and A-B >= A*B){
cout << A-B << endl;
}else{
cout << A*B << endl;
}
}
