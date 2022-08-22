#include<bits/stdc++.h>
using namespace std;
int main(){
int A,B;
cin >> A >> B;
int money = 0;
if (A <= 5) {
money = 0;
}else if(6 <= A <= 12){
money = B / 2;
}else{
money = B;
}
cout << money << endl;
return 0;
}
