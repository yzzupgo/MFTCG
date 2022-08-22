#include <bits/stdc++.h>
using namespace std;
int main(){
int A,B;
cin >> A >> B;
if(A <= 5){
cout << 0;
}else if(6 <= A and A <= 12){
cout << B/2;
}else if(13 <= A){
cout << B;
}
}
