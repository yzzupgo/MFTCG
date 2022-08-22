#include<bits/stdc++.h>
using namespace std;
void processor() {
long long limit = 206, tax;
cin >> tax;
string output = "Yay!";
if(floor(tax * 1.08) == limit) {
output = "so-so";
} else if(floor(tax * 1.08) > limit) {
output = ":(";
}
cout << output << endl;
return;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int count = 1, counter = 0;
while(counter++ < count) {
processor();
}
return 0;
}
