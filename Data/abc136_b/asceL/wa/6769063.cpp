#include <iostream>
using namespace std;
int main(){
int n;
cin >> n;
int odd = 0;
odd = min(n - 9, 9);
odd += min(max(n-999, 0), 900);
odd += min(max(n-9999, 0), 90000);
cout << odd << endl;
return 0;
}
