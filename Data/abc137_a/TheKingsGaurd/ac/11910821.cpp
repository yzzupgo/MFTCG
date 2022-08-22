#include <iostream>
using namespace std;
int main(){
int a, b;
cin >> a >> b;
int element1 = a + b;
int element2 = a - b;
int element3 = a * b;
int arr[] = {element1, element2, element3};
int ln = sizeof(arr) / sizeof(*arr);
int maximum = arr[0];
for (int i = 0; i < ln; i++){
if (arr[i] > maximum){
maximum = arr[i];
}
}
cout << maximum;
}
