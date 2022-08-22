#include<iostream>
#include<vector>

using namespace std;

int main() {
    int index = 0;
    int m = 9;
    int count = 0;
    vector<int> a(5);
    for (int i = 0; i < 5; i++){
        cin >> a[i];
        if (m > a[i]%10 && a[i]%10 > 0){
            m = a[i]%10;
            index = i;
        }
    }

    for (int i = 0; i < 5; i++){
        if (i == index){
            count += a[i];
            continue;
        }
        count += 10*(a[i]/10);
        if (a[i]%10 != 0) {
            count += 10;
        }
    }
    cout << count << endl;
}