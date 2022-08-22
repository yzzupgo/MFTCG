#include<iostream>
#include<string>
using namespace std;
int main() {
int yen ;
int tax ;
cin >> yen;
tax = yen * 1.08;
if(tax < 206) {
cout << "Yay!" ;
} else if(tax == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
