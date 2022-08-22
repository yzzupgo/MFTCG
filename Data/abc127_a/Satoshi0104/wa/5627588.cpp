#include "bits/stdc++.h"
#include <iostream>
using namespace std;
int main(){
int A;
int B;
cin >> A;
cin >> B;
int result;
if (A > 13){
result = B;
}else if(6 <= A && A <= 12){
result = B/2;
}else{
result = 0;
}
cout << result << "\n";
}
