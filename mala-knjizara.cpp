#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <string>
#include <utility>

int main()
{
    int izbor, brojac=0;
    int brArtikla=0;
    unsigned long long int *barkod = new unsigned long long int[2000];
    string *naziv = new string[2000];
    double *cijena = new double[2000];
    while(1)
    {
        cout << "1. Unos novog artikla: " << endl;
        cout << "2. Ispis svih podataka: " << endl;
        cout << "3. Inventura: " << endl;
        cout << "4. Pretraga prema nazivu artikla: " << endl;
        cout << "5. Brisanje artikla: " << endl;
        cout << "6. Izmjena podataka artikla: " << endl;
        cout << "7. Izlaz iz programa: " << endl;
        cout << "Odaberite: ";
        cin >> izbor:
    }
    return 0;
}
