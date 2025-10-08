#include <iostream>
#include <string>

using namespace std;

string happy(int x);
string happy(int x1, int x2, int x3, int x4, int x5, int x6);
string happy(int x1, int x2);

int main() {
    int x, x1, x2, x3, x4, x5, x6, a, b;

    cout << "Введите шестизначное число\n";
    cin >> x;
    cout << happy(x) << endl;

    cout << "Введите шесть целых чисел\n";
    cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6;
    cout << happy(x1, x2, x3, x4, x5, x6) << endl;

    cout << "Введите два целых числа\n";
    cin >> a >> b;
    cout << happy(a, b) << endl;

}
string happy(int x) {
    int s1, s2;
    int x1, x2;
    s1 = 0;
    s2 = 0;
    x1 = x % 1000;
    x2 = x / 1000;
    for(int i = 0; i < 3; i ++) {
        s1 += x1 % 10;
        x1 /= 10;
        s2 += x2 % 10;
        x2 /= 10;
    }
    if (s1 == s2) {
        return "YES";
    }
    else {
        return "NO";
    }
}
string happy(int x1, int x2, int x3, int x4, int x5, int x6) {
    if (x1 + x2 + x3 == x6 + x5 + x4) {
        return "YES";
    }
    else {
        return "NO";
    }
}
string happy(int x1, int x2) {
    int s1 = 0;
    int s2 = 0;
    for (int i = 0; i < 3; i ++){
        s1 += x1 % 10;
        x1 /= 10;
        s2 += x2 % 10;
        x2 /= 10;

    }
    if (s1 == s2) {
        return "YES";
    }
    else {
        return "NO";
    }
}