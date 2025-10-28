// Lab 3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <math.h>
using namespace std;
//zadania Lab 3

int main()
{
    /*
    // zadanie 1
    int a, b;
    cout << "Podaj wartosc pierwszej liczby calkowitej (a): ";
    cin >> a;
    cout << "Podaj wartosc drugiej liczby calkowitej (b): ";
    cin >> b;

    if (a == b) {
        cout << "Liczby a i b sa sobie rowne" << endl;
    }
    else if (a < b) {
        cout << "Liczby a jest mniejsza od b" << endl;
    }
    else {
        cout << "Liczby a jest wieksza od b" << endl;
    }

    cout << endl;

    //zadanie 2
    int c, d;
    cout << "Podaj wartosc pierwszej liczby calkowitej (a): ";
    cin >> c;
    cout << "Podaj wartosc drugiej liczby calkowitej (b): ";
    cin >> d;

    if (c == d) {
        cout << "Liczby a i b sa sobie rowne" << endl;
    }
    else {
        if (c < d) {
            cout << "Liczby a jest mniejsza od b" << endl;
        }
        if (c > d) {
            cout << "Liczby a jest wieksza od b" << endl;
        }
    }

    //zadanie 3
    float r;
    cout << "Podaj wspolczynnik r: ";
    cin >> r;

    if (r <= 1 && r >= 0.7) {
        cout << "bardzo silna korelacja dodatnia" << endl;
    }
    else if (r >= 0.5 && r < 0.7) {
        cout << "silna korelacja dodatnia" << endl;
    }
    else if (r >= 0.3 && r < 0.5) {
        cout << "umiarkowana korelacja dodatnia" << endl;
    }
    else if (r >= 0.2 && r < 0.3) {
        cout << "slaba korelacja dodatnia" << endl;
    }
    else if (r >= 0 && r < 0.2) {
        cout << "silna korelacja dodatnia" << endl;
    }
    else {
        cout << "wspolczynnik r poza przedzialem" << endl;
    }

    //zadanie 4
    float e, f;
    char znak;

    cout << "Podaj pierwsza liczbe zmiennoprzecinkowa: ";
    cin >> e;
    cout << "Podaj druga liczbe zmiennoprzecinkowa: ";
    cin >> f;

    cout << "Podaj typ działania ktory chcesz wykonac (+,-,=,/): ";
    cin >> znak;

    if (f > 0 || f < 0) {
        switch (znak) {
        case '+': cout << "wynik: " << e + f << endl; break;
        case '-': cout << "wynik: " << e - f << endl; break;
        case '*': cout << "wynik: " << e * f << endl; break;
        case '/': cout << "wynik: " << e / f << endl; break;
        }
    }
    else
        cout << "nie mozna dzielic przez 0!";


    //zadanie 5
    int i;
    while (1) {
        for (int i = 0; ; i++) {
            cout << i;
        }
    }
    return 0;
    */

    //zadanie 6
    
    while (1) {
        float g, h;
        char znak1;
        string p;

        cout << "Podaj pierwsza liczbe zmiennoprzecinkowa: ";
        cin >> g;
        cout << "Podaj druga liczbe zmiennoprzecinkowa: ";
        cin >> h;

        cout << "Podaj typ działania ktory chcesz wykonac (+,-,=,/): ";
        cin >> znak1;


        switch (znak1) {
        case '+': cout << "wynik: " << g + h << endl; break;
        case '-': cout << "wynik: " << g - h << endl; break;
        case '*': cout << "wynik: " << g * h << endl; break;
        case '/':
            if (h > 0 || h < 0)
                cout << "wynik: " << g / h << endl;
            else
                cout << "nie mozna dzielic przez 0!"; break;
        }


        cout << "Czy zakonczyc program? ";
        cin >> p;
        if (p == "tak") {
            cout << "koniec programu" << endl;
            return 0;
        }
        else
            cout << "kontynuacja programu" << endl;
    }
    return 0;

    }
    

    /*
    //zadanie 7
    int x=0;
    while (1) {
        x++;
        if (x == 200) {
            break;
        }
        if (x % 2 == 0) {
            continue;
        }
        cout << x << endl;
    }
    return 0;
    */
/*
    //zadanie 8
    int n, m;
    cout << "podaj dodatnia liczbe naturalna n: ";
    cin >> n;

    for (m = 2; m <= sqrt(n); m++) {
        if (n % m == 0) {
            cout << "Twoja liczba naturalna n ma dzielnik z przedzialu {2,√n} rowny - " << m << "\n";
            break;
        }
    }
    return 0;
    }
    */
   


