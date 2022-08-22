#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int A, B, list[3];
cin >> A >> B;
list[0] = A + B;
list[1] = A - B;
list[2] = A*B;
sort(list, list + 3, greater<int>());
cout << list[0] << endl;
return 0;
}
