#include<bits/stdc++.h>
#define yess cout<<"Yes"<<endl;
#define noo cout<<"No"<<endl;
#define endl ("\n")
using namespace std;
int main() {
int n;
cin >> n;
if((n * 1.08) < 206) {
cout << "Yay!" << endl;
} else if((n * 1.08) == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
