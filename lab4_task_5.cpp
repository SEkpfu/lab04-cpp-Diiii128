#include <iostream>

using namespace std;

void factorial(int n, int &ans);
void power(int n, int x, int &ans);

int main() {
    int N, M, x, n, xn;
    int fn, fm, fnm;

    cout << "Введите N, M\n";
    cin >> N;
    cin >> M;

    factorial(N, fn);
    factorial(M, fm);
    factorial(N + M, fnm);

    cout << "a) " << (fn * fm * 1.0)/ fnm << endl;

    cout << "Введите x, n\n";
    cin >> x >> n;

    power(n, x, xn);
    cout << "b) " << xn;
}
void factorial(int n, int &ans) {
    ans = 1;
    for (int i = 1; i <= n; i ++) {
        ans *= i;
    }
}
void power(int n, int x, int &ans) {
    ans = 1;
    for(int i = 0; i < n; i ++) {
        ans *= x;
    }
}