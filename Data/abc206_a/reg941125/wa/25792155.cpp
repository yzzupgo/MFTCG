#include<iostream>
#include<string>
using namespace std;
int main() {
int yen ;
cin >> yen;
if(yen * 1.08 < 206) {
cout << "Yay!" ;
} else if(yen * 1.08 == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
