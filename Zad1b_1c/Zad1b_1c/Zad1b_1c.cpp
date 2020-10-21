// Zad1b_1c.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cmath>
using namespace std;

#define Zadanie1C

#ifdef Zadanie1A
int main()
{
    int a = 0, b = 0;                 // program rezerwuje i tworzy zmienne a,b,c , których wartość wynosi 0
    double c = 0;
    cout << "Podaj a:";               // wyświetlenie ""
    cin >> a;                         // pobieranie od użytkownika zmiennej a 
    cout << "Podaj b:";               // wyświetlenie ""
    cin >> b;                         // pobieranie od użytkownika zmiennej b                       // pobieranie od użytkownika zmiennej c
    c = (a + b) / 2.0;                //wykonanie działania i przypisanie wartości dla zmiennej c
    cout << "Wynik to:" << c << endl; // wyswietlenie "" a natepnie zmiennej c

    double d = 0, f = 0, g = 0, h = 0; // program rezerwuje pamięć dla zmiennych d,f,g,h
    cout << "Podaj d";                 // program wyświetla na konsoli podany tekst w nawiasie
    cin >> d;                          // program pobiera od użytkownika podana wartość wpisaną z klawiatury dla zmiennej d  
    cout << "Podaj f";                 // program wyświetla na konsoli podany tekst w nawiasie
    cin >> f;                          // program pobiera od użytkownika podana wartość wpisaną z klawiatury dla zmiennej f
    g = (d + f) / (d - f);             // program wykonuje działanie i przypisuje wynik dla zmiennej g
    h = d*d + (f / g);                 // program wykonuje działanie i przypisuje wynik dla zmiennej h

    cout << "Wynik g:" << g << ", wynik h:" << h; // program wyświetla najpierw 1 cudzysłów potem wartość g następnie drugi i wartość h


}
#endif // Zadanie1A


#ifdef Zadanie1B
int main()
{
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
}
#endif // Zadanie1B

#ifdef Zadanie1C

int main()
{
    char c, z;
    signed int n;
    cout << "Podaj znak - ";
    cin >> c;
    cout << "Podaj liczbe = ";
    cin >> n;
    z = (c + n) % 126;
    cout << c << "(" <<(int)c << ")" <<"  =>  " << z << "(" <<(int)z << ")" <<endl;
} 
#endif // Zadanie1C


