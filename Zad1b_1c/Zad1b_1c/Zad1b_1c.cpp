// Zad1b_1c.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //                                            ZAD 1B
    double x = 0, a = 0, b = 0, c = 0;
    double f = 0, g = 0, h = 0, d = 2.5, e = 2.7182, E = 0;
    E = 5 * 3.1415 * sqrt(5);
    cout << "Podaj wartosc x = ";
    cin >> x;
    cout << "Podaj wartosc a = ";
    cin >> a;
    cout << "Podaj wartosc b = ";
    cin >> b;
    cout << "Podaj wartosc c = ";
    cin >> c;
    // a)
    f = (E + (d * (pow((2 * (b / (5 + a)) * x) + log10(c), (e + (x / 2))))));
    cout << "F(x)=" << f << endl;
    // b)
    g = (E * ((fabs(a * pow(x, 3)) - d) / ((b * pow(x, 2)) + c * x)));
    cout << "G(x)=" << g << endl;
    // c)
    h = fabs(((a * sin(E * x)) + (b * cos(E * x))) / (d * (c + 5)));
    cout << "H(x)=" << h << endl;
    //                                            ZAD 1C
}

