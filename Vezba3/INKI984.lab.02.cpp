#include <iostream>
#include <string>

using namespace std;

int main() {
    string months[12] = {"January", "February", "March", "April", "May", "June", 
                         "July", "August", "September", "October", "November", "December"};
    int monthNumber;
    
    cout << "Mesecite od godinata se:" << endl;
    for (int i = 0; i < 12; i++) {
        cout << i + 1 << ". " << months[i] << endl;
    }
    
    cout << "Vnesi broj na mesec za koj sakas da ja dobiesh sezonata: ";
    cin >> monthNumber;
    
    if (monthNumber >= 1 && monthNumber <= 12) {                                                // Vo zadacata mu zadavam broj na sekoj od mesecite od godinata, potoa mu zadavam broevi za sekoja sezona (Zima, Prolet, Leto, Esen)
        switch(monthNumber) {                                                                   // I koga ke odberam eden broj od mesecite mi ja kazuva sezonata i negoviot broj, ako vnesam broj poinakov od 1 do 12 ne raboti zadacata.
            case 12:
            case 1:
            case 2:
                cout << "Sezonata za " << months[monthNumber-1] << " e ZIMA." << endl;
                break;
            case 3:
            case 4:
            case 5:
                cout << "Sezonata za " << months[monthNumber-1] << " e PROLET." << endl;
                break;
            case 6:
            case 7:
            case 8:
                cout << "Sezonata za " << months[monthNumber-1] << " e LETO" << endl;
                break;
            case 9:
            case 10:
            case 11:
                cout << "Sezonata za " << months[monthNumber-1] << " e ESEN." << endl;
                break;
        }
        cout << "Brojot za mesecot " << months[monthNumber-1] << " e: " << monthNumber << endl;
    } else {
        cout << "Nevaliden broj, vnesi broj od 1 do 12." << endl;
    }
    
    return 0;
}
