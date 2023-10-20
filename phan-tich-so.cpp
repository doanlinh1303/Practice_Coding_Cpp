#include <iostream>
using namespace std;
#define MAX 100

int n, M, X[MAX];
int sum = 0;

void print() {
    for (int i = 1; i <= n; i++) {
        cout << X[i] << " ";
    }
    cout << endl;
}

void Try(int i) {
    for (int j = 1; j <= M - n + 1; j++) {
        X[i] = j;
        sum += j;

        if (i == n) {
            if (sum == M) {
                print();
            }
        } else {
            Try(i + 1);
        }

        // Backtrack
        sum -= j;
    }
}

int main() {
    cin >> n >> M;
    Try(1);
    return 0;
}

