#include <iostream>
#include <cmath>

using namespace std;

bool Cube(int n) {
    int i = round(cbrt(n));
    return i * i * i == n;
}

int main() {
    int liczba;
    cout << "Podaj liczbe:";
    cin >> liczba;
    if (Cube(liczba)) {
        cout << liczba << " jest szescianem pewnej liczby calkowitej." << endl;
    } else {
        cout << liczba << " nie jest szescianem." << endl;
    }

    return 0; 

}
