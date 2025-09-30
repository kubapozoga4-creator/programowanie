#include <iostream>

/*
*.
*. Program obliczaj�cy obj�to�� sto�ka.
*. Program obliczaj�cy pole ko�a.
*. Program obliczaj�cy warto�� wyra�enia a^2 + b^2
*. Program obliczaj�cy pole tr�jk�ta o podstawie b i wysoko�ci h
*. Program obliczaj�cy obj�to�� kuli o promieniu r
*. Program obliczaj�cy pole trapezu o podstawach a i b oraz wysoko�ci h
*. Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
*. Stw�rz program, kt�ry pobiera od u�ytkownika d�ugo�� w metrach i przelicza j� na centymetry i milimetry, wy�wietlaj�c wynik.
*. Napisz program, kt�ry konwertuje wprowadzon� kwot� w jednej walucie na inn�, korzystaj�c z okre�lonego kursu wymiany.
*/

//Napisz program kt�ry wczyta liczb� od u�ytkownika i j� wy�wietli na konsoli

void task1()
{
    //wczytanie liczby
        //deklaracja zmiennych          1
        //pobranie liczby
            //informacja co chcemy      2
            //oczekiwanie na liczb�     3
    //wy�wietlenie na konsoli           4

    //1
    int numberFromUser; //number_from_user
    //2
    std::cout << "Podaj liczb� ca�kowit�:\n";
    //3
    std::cin >> numberFromUser;
    //4
    std::cout << "Poda�e� " << numberFromUser << "\n";
}

//Program obliczaj�cy �redni� arytmetyczn� dw�ch liczb.
void task2()
{
    int firstNumber, secondNumber;

    std::cout << "Podaj pierwsz� liczb�:\n";
    std::cin >> firstNumber;

    std::cout << "Podaj drug� liczb�:\n";
    std::cin >> secondNumber;

    int avg;

    avg = (firstNumber + secondNumber) / 2;

    std::cout << "Wynik �redniej: " << avg << "\n";
}

//Program obliczaj�cy obj�tno�� sto�ka
void task3()
{
#include <iostream>
#include <cmath>
    using namespace std;

    int main() 
    {
        double r, h, V;
        cout << "Podaj promien podstawy sto�ka (r): ";
        cin >> r;
        cout << "Podaj wysokosc sto�ka (h): ";
        cin >> h;
        V = (M_PI * r * r * h) / 3;
        cout << "Objetosc sto�ka: " << V << endl;
        return 0;
    }

}

//program obliczaj�cy pole ko�a
void task4()
{
#include <iostream>
#include <cmath>
    using namespace std;

    int main() 
    {
        double r, P;
        cout << "Podaj promien kola: ";
        cin >> r;
        P = M_PI * r * r;
        cout << "Pole kola: " << P << endl;
        return 0;
    }

}

//Program obliczaj�cy warto�� wyra�enia a^2 + b^2
void task5()
{ 
#include <iostream>
#include <cmath>
    using namespace std;

    int main() 
    {
        double a, b, wynik;
        cout << "Podaj a: ";
        cin >> a;
        cout << "Podaj b: ";
        cin >> b;
        wynik = pow(a, 2) + pow(b, 2);
        cout << "Wartosc wyrazenia a^2 + b^2: " << wynik << endl;
        return 0;
    }

}

//Program obliczaj�cy pole tr�jk�ta o podstawie b i wysoko�ci h
void task6()
{
#include <iostream>
    using namespace std;

    int main() {
        double b, h, pole;
        cout << "Podaj podstawe trojkata (b): ";
        cin >> b;
        cout << "Podaj wysokosc trojkata (h): ";
        cin >> h;
        pole = 0.5 * b * h;
        cout << "Pole trojkata: " << pole << endl;
        return 0;
    }

}

//Program obliczaj�cy obj�to�� kuli o promieniu r
void task7()
{
#include <iostream>
#include <cmath>
    using namespace std;

    int main() {
        double r, V;
        cout << "Podaj promien kuli: ";
        cin >> r;
        V = (4.0 / 3.0) * M_PI * pow(r, 3);
        cout << "Objetosc kuli: " << V << endl;
        return 0;
    }

}   

//Program obliczaj�cy pole trapezu o podstawach a i b oraz wysoko�ci h
void task8()
{
#include <iostream>
    using namespace std;

    int main() {
        double a, b, h, pole;
        cout << "Podaj podstawe a: ";
        cin >> a;
        cout << "Podaj podstawe b: ";
        cin >> b;
        cout << "Podaj wysokosc h: ";
        cin >> h;
        pole = 0.5 * (a + b) * h;
        cout << "Pole trapezu: " << pole << endl;
        return 0;
    }

}

//Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3
void task9()
{
#include <iostream>
    using namespace std;

    int main() {
        double x1, x2, x3, w1, w2, w3, srednia;
        cout << "Podaj trzy liczby: ";
        cin >> x1 >> x2 >> x3;
        cout << "Podaj trzy wagi: ";
        cin >> w1 >> w2 >> w3;
        srednia = (x1 * w1 + x2 * w2 + x3 * w3) / (w1 + w2 + w3);
        cout << "Srednia wazona: " << srednia << endl;
        return 0;
    }

}

//Stw�rz program, kt�ry pobiera od u�ytkownika d�ugo�� w metrach i przelicza j� na centymetry i milimetry, wy�wietlaj�c wynik
void task10()
{
#include <iostream>
    using namespace std;

    int main() {
        double metry;
        cout << "Podaj dlugosc w metrach: ";
        cin >> metry;
        cout << "Centymetry: " << metry * 100 << " cm" << endl;
        cout << "Milimetry: " << metry * 1000 << " mm" << endl;
        return 0;
    }

}

//Napisz program, kt�ry konwertuje wprowadzon� kwot� w jednej walucie na inn�, korzystaj�c z okre�lonego kursu wymiany
void task11()
{
#include <iostream>
    using namespace std;

    int main() {
        double kwotaPLN, kurs, kwotaEUR;
        cout << "Podaj kwote w PLN: ";
        cin >> kwotaPLN;
        cout << "Podaj kurs wymiany PLN -> EUR: ";
        cin >> kurs;
        kwotaEUR = kwotaPLN / kurs;
        cout << "Kwota w EUR: " << kwotaEUR << endl;
        return 0;
    }

}

int main()
{
    task3();
}


/*

Zmienna - pewien obszar w pami�ci operacyjnej, w kt�rej mo�na
w danej chwili przechowa� tylko jedn� dan�.

Instrukcja daklaracji zmiennej:
typ_zmienej nazwaZmiennej;

Typ zmiennej - wielko�� obszaru pami�ci, interpretacja ci�gu bit�w

int - 2 bajtowa lub 4 bajtowa liczba ca�kowita ze znakiem
short - 2 bajtowa liczba ca�kowita ze znakiem <-32 768, 32 767>
long - 4 bajtowa liczba ca�kowita ze znakiem <-2 147 483 648, 2 147 483 647>
long long - 8 bajtowa liczba ze znakiem <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>

unsigned - zmienna bez znaku <0, 2*max + 1>

float - 4 bajtowa liczba rzeczywista, dok�adno�� 6-7 cyfr po przecinku
double - 8 bajtowa liczba rzeczywista, dok�adno�� 15-16 cyfr po przecinku
long double - 12 bajtowa liczba rzeczywista, dok�adno�� 19-20 cyfr po przecinku

Nazwa zmiennej - nazwa obszaru w pami�ci, identyfikator
Warunki niezb�dne:
* dozwolone znaki:
    - alfabet angielski aA-zZ
    - cyfry arabskie 0-9
    - podkre�lenie (pod�oga) _
* pierwszym znakiem nie mo�e by� cyfra
* unikalny w swoim zakresie widoczno�ci
* nie mo�e to by� s�owo kluczowe (zarezerwowane) danego j�zyka

Warunki programist�w:
* nazwa zmiennej powinna oddawa� charakter przechowywanych danych
* je�li wiele s��w to w miejscu spacji podkre�lenie lub zaczynaj�c od drugiego
  s�owa piszemy je z du�ej litery
* piszemy po angielsku
*/