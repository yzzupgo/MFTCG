#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void printVector(vector<int> v) {
    for (auto x : v) {
        cout << x << ' ';
    }
    cout << '\n';
}

void printArray(ll A[], int size) {
    for (int i = 0; i <= size - 1; i++) cout << A[i] << ' ';
}

int main() {
    int A[5];
    int Choice[5];
    for (int i = 0; i <= 4; i++) cin >> A[i];
    for (int i = 0; i <= 4; i++) {
        Choice[i] = (A[i] / 10) * 10 + 10 - A[i];
        if (Choice[i] == 10) Choice[i] = 0;
    }
    int escolhido = 0;
    int indiceEscolhido = 0;
    for (int i = 0; i <= 4; i++) {
        if (Choice[i] > escolhido) {
            escolhido = Choice[i];
            indiceEscolhido = i;
        }
    }
    int tot = 0;
    for (int i = 0; i <= 4; i++) {
        if (i == indiceEscolhido || A[i] % 10 == 0) tot += A[i];
        else tot += (A[i] / 10) * 10 + 10;
    }
    cout << escolhido << '\n';
    cout << tot << '\n';
    return 0;
}