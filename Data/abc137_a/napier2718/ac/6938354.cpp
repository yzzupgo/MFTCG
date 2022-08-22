#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
int A,B;
cin >> A >>B;
cout << max(max(A+B, A-B),A*B) << endl;
return 0;
}
