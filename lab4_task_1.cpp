#include <iostream>

using namespace std;

double sum(float a, float b);
double min(float a, float b);
double prod(float a, float b);

int main(){
    setlocale(0, "");
    float a, b;

    cout << "Введите a, b\n";
    cin >> a >> b;

    cout << sum(prod(5, sum(b, min(a, 2))), prod(1000, a));
}
double sum(float a, float b){
    return a + b;
}
double min(float a, float b){
    return a - b;
}
double prod(float a, float b){
    return a * b;
}