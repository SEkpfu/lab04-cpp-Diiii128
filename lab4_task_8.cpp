#include <iostream>
#include <cmath>

using namespace std;

void f(float a, float b, float c, float &y1, float &y2, int &num);

int main() {
    float a, b, c, y1, y2;
    int num;

    cin >> a >> b >> c;

    f(a, b, c, y1, y2, num);

    if (num == 0) {
        cout << "Действительных корней нет\n";
    }
    else {
        if (num == 1) {
            cout << "x = " << y1 << endl;
        }
        else {
            cout << "x1 = " << y1 << endl;
            cout << "x2 = " << y2;
        }
    }
}
void f(float a, float b, float c, float &y1, float &y2, int &num) {
    float d;
    d = b * b - 4 * a * c;
    if (d >= 0) {
        if (d == 0) {
            num = 1;
            y1 = (-b) / (2.0 * a);
        }
        else {
            num = 2;
            y1 = (-b + sqrt(d)) / (2.0 * a);
            y2 = (-b - sqrt(d)) / (2.0 * a);
        }
    }
    else {
        num = 0;
    }
}