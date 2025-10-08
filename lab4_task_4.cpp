#include <iostream>

using namespace std;

void a(string &ans);
void b(int n, string &ans);
void c(int n, int m, string &ans);
void d(int n, int m, string &ans);

int main() {
    int n, m;
    string ans;
    setlocale(0, "");
    a(ans);
    cout << "a)\n" << ans;

    cout << "Введите n\n";
    cin >> n;

    b(n, ans);
    cout << "b)\n" << ans;

    cout << "Введите m\n";
    cin >> m;

    c(n, m, ans);
    cout << "c)" << ans << endl;

    d(n, m, ans);
    cout << "d)\n" << ans;
}
void a(string &ans) {
    string s = "";
    ans = "";
    for (int i = 0; i < 4; i ++) {
        s += "* ";
    }
    s += "\n";
    for (int i = 0; i < 4; i ++) {
        ans += s;
    }
}
void b(int n, string &ans) {
    string s = "";
    ans = "";
    for (int i = 0; i < n; i ++) {
        s += "* ";
    }
    s += "\n";
    for (int i = 0; i < n; i ++) {
        ans += s;
    }
}
void c(int n, int m, string &ans) {
    string s = "";
    ans = "";
    for (int i = 0; i < n; i ++) {
        s += "* ";
    }
    for (int i = 0; i < m; i ++) {
        s = " " + s;
    }
    for (int i = 0; i < n; i ++) {
        ans += "\n" + s;
    }
}
void d(int n, int m, string &ans) {
    ans = "";
    string s1 = "";
    string s2 = "";
    string ss1 = "";
    string ss2 = "";

    for (int i = 1; i <= m ; i ++) {
        s1 += "* ";
        s2 += "  ";
    }
    int h = 0;
    for (int i = 0; i < n ; i ++) {
        if ((h % 2) == 0){
            ss1 += s1;
            ss2 += s2;
            h ++;
        }
        else {
            ss1 += s2;
            ss2 += s1;
            h ++;
        }
    }
    h = 0;
    for (int i = 0; i < n; i ++) {
        if (h % 2 == 0) {
            for (int k = 0; k < m; k ++) {
                ans += ss1 + "\n";
            }
            h ++;
        }
        else {
            for (int k = 0; k < m; k ++) {
                ans += ss2 + "\n";
            }
            h ++;
        }
    }

}