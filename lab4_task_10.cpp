#include <iostream>

using namespace std;

double sr(double a, double b);
double sr(double a, double b, double c);
double sr(double a, double b, double c, double d);

int main() {
    double a, b, c, d;

    cout << "Введите 4 вещественных числа\n";
    cin >> a >> b >> c >> d;

    cout << "Среднее арифмитическое двух чисел " << sr(a, b) << endl;
    cout << "Среднее арифмитическое трех чисел " << sr(a, b, c) << endl;
    cout << "Среднее арифмитическое четырех чисел " << sr(a, b, c, d) << endl;


}
double sr(double a, double b) {
    return (a + b) / 2.0;
}
double sr(double a, double b, double c) {
    return (a + b + c) / 3.0;
}
double sr(double a, double b, double c, double d) {
    return (a + b + c + d) / 4.0;
}