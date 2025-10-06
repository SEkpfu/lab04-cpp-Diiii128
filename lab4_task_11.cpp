#include <iostream>
#include <cmath>

using namespace std;

float s(int a, int h);
float s(int a, int b, int c);
float s(float a, float b, float c);

int main() {
    float a, b, c;
    int u, h;

    cin >> a >> b >> c;
    cin >> h >> u;

    cout << "Площадь через высоту и сторону равна " << s(int(a), int(h)) << endl;
    cout << "Площадь через две стороны и угол " << s(int(a), int(b), int(u)) << endl;
    cout << "Площадь через три стороны " << s(a, b, c) << endl;
}
float s(int a, int h) {
    return a * h * 0.5;
}
float s(int a, int b, int c) {
    return a * b * sin(c * M_PI / 180.0) * 0.5;
}
float s(float a, float b, float c) {
    float p;
    p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}