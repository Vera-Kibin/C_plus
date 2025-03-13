#include <iostream>
#include <vector>
using namespace std;

int main() {
    // instrukcje w c++
    //cout << "Hi" << endl;
    // zmienne : typowane(liczby całkowitoliczbowe: int, short, long, float)
    //int a;
    //char k = 20230;

    //cout << (int)k << endl; // wyswietla 6

    // operator sizeof
    //cout << sizeof(k) << endl; // 1

    // unsigned int k;

    // =====================

    // inicjalizacja
    // polecany sposób inicjal. zmien.:
    //int k {10}; 

    //string imie;
    // zm. zmienneprzecinkowe (float, double)


    //petle for, while, do-while

    //zad1: napisz program, który pyta
    //użytkownika o hasło i jeśli jest równe
    //"querty" to powita
    //string haslo;
    //do
    //{
    //    cout << "Podaj hasło";
    //    cin >> haslo;
    //} while (haslo != "qwerty");
    
    //instrukcje switch
    //break, continue
 
   
    //if (haslo == "qwerty")
    //{
    //    cout << "Witaj" << endl;
    //}
    //else
    //{
    //    cout << "Zle haslo!" << endl;
    //}

    //const int n (20), k (10);
    //string haslo;

    // pętla for
    //for (int i(0); i<20; i++)
    //{
    //    cout << "Liczba i="<< i << endl;
    //};



    //tablice:

    // Tworzymy tablice 20 liczb Fibonacci
    //wypelnimy wszystkie od ostatniej do pierwszej

    //1. Struktura danych
    const int ROZMIAR = 20;
    int tablica[ROZMIAR]; // deklarujemy tabl 20 liczb

    tablica[0] = 1;
    tablica[1] = 1;

    for (int i=2; i<20; i++){
        tablica[i] = tablica[i-1] + tablica[i-2];
    }
    cout << "FIBONACCI:"<< endl;

    for (int i=0; i<20; i++){
        cout << tablica[i] << ", ";
    }
    //FIBONACCI:
    //1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765

    // to samo ale przy uyciu dynamicznej struktury wektorow
    vector<int> wektor {1, 1};

    cout <<  "rozmiar wektora: " << wektor.size();
    for (int i = 2; i<20; i++){
        int pop1 = wektor[i-1];
        int pop2 = wektor[i-2];
        wektor.push_back(pop1+pop2);
    }
    // uz. petle foreach
    cout << "\nLiczby Fib.: ";
    for (auto el : wektor) // for (int& el : wektor) !! kopia - poczytac
    {
        cout << el << ",";
    }
}