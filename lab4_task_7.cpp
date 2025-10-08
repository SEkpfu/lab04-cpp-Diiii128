#include <iostream>

using namespace std;

void tF(double t, double &f);
void tK(double t, double &k);
void out(double t, double &k, double &f);

int main() {
    double t, f, k;
    
    cin >> t;

    out(t, k, f);
    cout << f << endl << k;
}
void tF(double t, double &f) {
    f = (9.0 / 5.0) * t + 32.0;
}
void tK(double t, double &k) {
    k = t + 273.0;
}
void out(double t, double &k, double &f) {
    tF(t, f);
    tK(t, k);
}