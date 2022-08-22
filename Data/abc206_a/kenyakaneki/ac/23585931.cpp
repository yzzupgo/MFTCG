#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
int main() {
ll N, res ;
cin >> N ;
res = N * 1.08 ;
if(res == 206) {
cout << "so-so" ;
} else if(res > 206) {
cout << ":(" ;
} else {
cout << "Yay!" ;
}
}
