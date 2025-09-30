#include <iostream>

/*
*.
*. Program obliczaj¹cy objêtoœæ sto¿ka.
*. Program obliczaj¹cy pole ko³a.
*. Program obliczaj¹cy wartoœæ wyra¿enia a^2 + b^2
*. Program obliczaj¹cy pole trójk¹ta o podstawie b i wysokoœci h
*. Program obliczaj¹cy objêtoœæ kuli o promieniu r
*. Program obliczaj¹cy pole trapezu o podstawach a i b oraz wysokoœci h
*. Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
*. Stwórz program, który pobiera od u¿ytkownika d³ugoœæ w metrach i przelicza j¹ na centymetry i milimetry, wyœwietlaj¹c wynik.
*. Napisz program, który konwertuje wprowadzon¹ kwotê w jednej walucie na inn¹, korzystaj¹c z okreœlonego kursu wymiany.
*/

//Napisz program który wczyta liczbê od u¿ytkownika i j¹ wyœwietli na konsoli

void task1()
{
    //wczytanie liczby
        //deklaracja zmiennych          1
        //pobranie liczby
            //informacja co chcemy      2
            //oczekiwanie na liczbê     3
    //wyœwietlenie na konsoli           4

    //1
    int numberFromUser; //number_from_user
    //2
    std::cout << "Podaj liczbê ca³kowit¹:\n";
    //3
    std::cin >> numberFromUser;
    //4
    std::cout << "Poda³eœ " << numberFromUser << "\n";
}

//Program obliczaj¹cy œredni¹ arytmetyczn¹ dwóch liczb.
void task2()
{
    int firstNumber, secondNumber;

    std::cout << "Podaj pierwsz¹ liczbê:\n";
    std::cin >> firstNumber;

    std::cout << "Podaj drug¹ liczbê:\n";
    std::cin >> secondNumber;

    int avg;

    avg = (firstNumber + secondNumber) / 2;

    std::cout << "Wynik œredniej: " << avg << "\n";
}

//Program obliczaj¹cy objêtnoœæ sto¿ka
void task3()
{
#include <iostream>
#include <cmath>
    using namespace std;

    int main() 
    {
        double r, h, V;
        cout << "Podaj promien podstawy sto¿ka (r): ";
        cin >> r;
        cout << "Podaj wysokosc sto¿ka (h): ";
        cin >> h;
        V = (M_PI * r * r * h) / 3;
        cout << "Objetosc sto¿ka: " << V << endl;
        return 0;
    }

}

//program obliczaj¹cy pole ko³a
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

//Program obliczaj¹cy wartoœæ wyra¿enia a^2 + b^2
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

//Program obliczaj¹cy pole trójk¹ta o podstawie b i wysokoœci h
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

//Program obliczaj¹cy objêtoœæ kuli o promieniu r
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

//Program obliczaj¹cy pole trapezu o podstawach a i b oraz wysokoœci h
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

//Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3
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

//Stwórz program, który pobiera od u¿ytkownika d³ugoœæ w metrach i przelicza j¹ na centymetry i milimetry, wyœwietlaj¹c wynik
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

//Napisz program, który konwertuje wprowadzon¹ kwotê w jednej walucie na inn¹, korzystaj¹c z okreœlonego kursu wymiany
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

Zmienna - pewien obszar w pamiêci operacyjnej, w której mo¿na
w danej chwili przechowaæ tylko jedn¹ dan¹.

Instrukcja daklaracji zmiennej:
typ_zmienej nazwaZmiennej;

Typ zmiennej - wielkoœæ obszaru pamiêci, interpretacja ci¹gu bitów

int - 2 bajtowa lub 4 bajtowa liczba ca³kowita ze znakiem
short - 2 bajtowa liczba ca³kowita ze znakiem <-32 768, 32 767>
long - 4 bajtowa liczba ca³kowita ze znakiem <-2 147 483 648, 2 147 483 647>
long long - 8 bajtowa liczba ze znakiem <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>

unsigned - zmienna bez znaku <0, 2*max + 1>

float - 4 bajtowa liczba rzeczywista, dok³adnoœæ 6-7 cyfr po przecinku
double - 8 bajtowa liczba rzeczywista, dok³adnoœæ 15-16 cyfr po przecinku
long double - 12 bajtowa liczba rzeczywista, dok³adnoœæ 19-20 cyfr po przecinku

Nazwa zmiennej - nazwa obszaru w pamiêci, identyfikator
Warunki niezbêdne:
* dozwolone znaki:
    - alfabet angielski aA-zZ
    - cyfry arabskie 0-9
    - podkreœlenie (pod³oga) _
* pierwszym znakiem nie mo¿e byæ cyfra
* unikalny w swoim zakresie widocznoœci
* nie mo¿e to byæ s³owo kluczowe (zarezerwowane) danego jêzyka

Warunki programistów:
* nazwa zmiennej powinna oddawaæ charakter przechowywanych danych
* jeœli wiele s³ów to w miejscu spacji podkreœlenie lub zaczynaj¹c od drugiego
  s³owa piszemy je z du¿ej litery
* piszemy po angielsku
*/