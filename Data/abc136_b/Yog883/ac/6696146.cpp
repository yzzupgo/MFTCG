#include <iostream>
using namespace std;
int main() {
int ma;
cin >> ma;
if(ma<10){
cout << ma <<"\n";
}else if (ma < 100){
cout << "9\n";
}else if (ma < 1000){
cout << ma-99 + 9 << "\n";
}else if (ma < 10000){
cout << "909\n";
}else if (ma < 100000){
cout << ma-9999 + 909 << "\n";
}else{
cout << "90909\n";
}
return 0;
}
