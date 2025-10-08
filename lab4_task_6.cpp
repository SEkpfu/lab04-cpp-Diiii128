#include <iostream>
#include <cmath>

using namespace std;

void sign (int n, char &ans);
void nsl(int x, string &ans);

int main() {
    int n;
    char ans;
    string a;
    string b;
    setlocale(0, "");

    cout << "Введите n\n";
    cin >> n;

    sign(n, ans);
    nsl(n, a);

    b = ans + a;
    cout << b;

}
void sign (int n, char &ans) {

    if (n >= 0) {
        ans = '+';
    }
    else {
        ans = '-';
    }

}
void nsl(int x, string &ans) {
    string str[11] = {"ноль", "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять", "десять"};
    ans = str[abs(x)];
}
