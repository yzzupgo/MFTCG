#include <bits/stdc++.h>
using namespace std;
int main(){
int N;
cin >> N;
if(N<10){
cout << N << endl;
}
else if(N<100){
cout << 9 << endl;
}
else if(N<1000){
cout << N-90 << endl;
}
else if(N<10000){
cout << 909 << endl;
}
else{
cout << 90909-100000+N << endl;
}
}
