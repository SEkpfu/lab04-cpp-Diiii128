#include <iostream>
#include <cmath>

using namespace std;

double f(double x);
void f(double x, double &y2, double &y4, double &y10, double &ya, double &yb, double &yab, double a, double b);

int main() {
    double x, y2, y4, y10, ya, yb, yab, a, b;
    int num_neg = 0;
    int m = -100;

    cout << "Введите x\n";
    cin >> x;

    cout << "Введите a, b\n";
    cin >> a >> b;

    f(x, y2, y4, y10, ya, yb, yab, a, b);

    cout << "a) " << 12.5 + y2 + y4 * y10 + ya - yb + yab << endl;

    double num_x [7];
    double num_y [7];

    cout << "Введите 7 вещественных чисел\n";
    for (int i = 0; i < 7; i++) {
        cin >> num_x[i];
        num_y[i] = f(num_x[i]);
    }
    for(double n : num_y) {
        num_neg += n < 0;
        m = max(n, m);
    }

    cout << "b) Кол-во отрицательных чисел равно " << num_neg << ", максимаотый элемент массива равен " << m << endl;

}
double f(double x) {
    if (x < 0) {
        return 2.0 + 1.0 / 3.0;
    }
    else {
        if (x < 2 * M_PI) {
            return x * x - 3.0;
        }
        else {
            return (1.0 + x * x * x) / (2.0 * x);
        }
    }
}
void f(double x, double &y2, double &y4, double &y10, double &ya, double &yb, double &yab, double a, double b) {
    y2 = f(2);
    y4 = f(4);
    y10 = f(10);
    ya = f(a);
    yb = f(b);
    yab = f(a * b);
}