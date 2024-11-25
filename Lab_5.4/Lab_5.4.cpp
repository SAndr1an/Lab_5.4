#include <iostream>
#include <cmath>
using namespace std;

double Interaction(const int N) {
    double S = 0;
    for (int i = 3; i <= N; i++) {
        S += (cos(i / 2.0) + sin(2 * i)) / (1 + sin(cos(i)));
    }
    return S;
}

double S1uu(const int N, const int i) {
    if (i > N)
        return 0;
    return (cos(i / 2.0) + sin(2 * i)) / (1 + sin(cos(i))) + S1uu(N, i + 1);
}

double S2ud(const int N, const int i) {
    if (i < 3)
        return 0;
    return (cos(i / 2.0) + sin(2 * i)) / (1 + sin(cos(i))) + S2ud(N, i - 1);
}

double S3du(const int N, const int i, double t) {
    t += (cos(i / 2.0) + sin(2 * i)) / (1 + sin(cos(i)));
    if (i >= N)
        return t;
    return S3du(N, i + 1, t);
}

double S4dd(const int N, const int i, double t) {
    t += (cos(i / 2.0) + sin(2 * i)) / (1 + sin(cos(i)));
    if (i <= 3)
        return t;
    return S4dd(N, i - 1, t);
}

int main() {
    int N;
    cout << "N = ";
    cin >> N;

    if (N < 3) {
        cout << "N повинно бути більше трьох" << endl;
        return 1;
    }

    cout << "(iter) S0 = " << Interaction(N) << endl;
    cout << "(rec up ++) S1 = " << S1uu(N, 3) << endl;
    cout << "(rec up --) S2 = " << S2ud(N, N) << endl;
    cout << "(rec down ++) S3 = " << S3du(N, 3, 0) << endl;
    cout << "(rec down --) S4 = " << S4dd(N, N, 0) << endl;

    return 0;
}
