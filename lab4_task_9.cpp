#include <iostream>

using namespace std;

bool f(double x, double &ans);

int main() {
    double x, a, b, ans, ans2, ans0, ans2a, ans6, ansab, ansa;

    cout << "Введите x\n";
    cin >> x;

    if (f(x, ans)) {
        cout << "f(x) = " << ans << endl;
    }
    else {
        cout << "Ошибка" << endl;
    }

    cout << "Введите a, b\n";
    cin >> a >> b;

    f(2, ans2);
    f(0, ans0);
    f(a, ansa);
    f(2 * a, ans2a);
    f(6, ans6);
    f(a * b, ansab);

    if(f(2, ans2) * f(0, ans0) * f(a, ansa)) {
        cout << ans2 - ans0 * ansa << endl;
    }
    else {
        cout << "Ошибка" << endl;
    }
    if(f(2 * a, ans2a) * f(6, ans6) * f(a * b, ansab)) {
        cout << ans2a - ans6 + ansab << endl;
    }
    else {
        cout << "Ошибка" << endl;
    }
}
bool f(double x, double &ans) {
    if (x <= 2) {
        if ((x == 0) || (x == 1)) {
            return false;
        }
        ans = (2.0 * x + 1.0 / (1 - x)) / (3 * x);
    }
    else {
        if(x <= 5) {
            ans = 10.0 + 2.0 / 7;
        }
        else {
            ans = -3 - x;
        }
    }
    return true;
}