#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int Nl;
Nl = log10(N) + 1;
if(Nl == 1){
cout << N << endl;
}
else if(Nl == 2){
cout << 9 << endl;
}
else if(Nl == 3){
cout << N - 90 << endl;
}
else if(Nl == 4){
cout << 909 << endl;
}
else if(Nl == 5){
cout << N - 9100 << endl;
}
else{
cout << 90909 << endl;
}
}
