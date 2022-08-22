#include <bits/stdc++.h>
using namespace std;
int main(void){
int A, B;
cin >> A >> B;
int max = A + B;
if(max < A - B) max = A - B;
if(max < A * B) max = A * B;
cout << max << endl;
return 0;
}
