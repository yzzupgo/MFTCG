#include <bits/stdc++.h>
using namespace std;
int main() {
int A,B;
cin >> A >> B ;
if(max(A+B,A-B) > max(A+B,A*B)){
cout << max(A+B,A-B) <<endl;
}else{
cout << max(A+B,A*B) << endl;
}
}
