#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y;
cin >> X >> Y;
bool I = false;
for(int i=0;i<X+1;i++){
if(2*i + 2*X == Y){
I = true;
}
}
if(I == true){
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
}
