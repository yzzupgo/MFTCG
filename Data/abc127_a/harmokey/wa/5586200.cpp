#include<bits/stdc++.h>
using namespace std;
int main(void){
int A, B;
cin >> A >> B;
if(B >= 13) cout << A << endl;
else if(B >= 6) cout << A / 2 << endl;
else cout << 0 << endl;
return 0;
}
