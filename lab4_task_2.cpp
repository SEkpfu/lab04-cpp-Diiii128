#include <iostream>
#include <cmath>

using namespace std;

float pif(double x1, double x2, double y1, double y2);
float s(double x1, double x2, double x3, double y1, double y2, double y3);

int main(){
    setlocale(0, "");
    double x1, x2, y1, y2, x3, y3, x4, y4;

    cout << "Введите координаты первой точки\n";
    cin >> x1 >> y1;

    cout << "Введите координаты второй точки\n";
    cin >> x2 >> y2;

    cout << "Введите координаты третьей точки\n";
    cin >> x3 >> y3;

    cout << "Введите координаты четвертой точки\n";
    cin >> x4 >> y4;

    cout << "a) Длина отрезка, соединяющего точки 1 и 2 равна " << pif(x1, x2, y1, y2) << endl;

    cout << "b) Расстояние от первой точки до начала координат равно " << pif(x1, 0, y1, 0)
    << ", расстояние от второй точки до начала координат равно " << pif(x2, 0, y2, 0) << endl;

    cout << "c) Площадь треугольника, с вершинами в точках 1, 2 и 3 равна " << s(x1, x2, x3, y1, y2, y3) << endl;

    cout << "d) Площадь четырехугольника, с вершинами в заданных координатах равна " << s(x1, x2, x3, y1, y2, y3) + s(x1, x4, x3, y1, y4, y3);
}
float pif(double x1, double x2, double y1, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
float s(double x1, double x2, double x3, double y1, double y2, double y3) {
    double a, b, c, p;

    a = pif(x1, x2, y1, y2);
    b = pif(x2, x3, y2, y3);
    c = pif(x1, x3, y1, y3);
    p = (a + b + c) / 2.0;

    return sqrt(p * (p - c) * (p - b) * (p - a));
}

