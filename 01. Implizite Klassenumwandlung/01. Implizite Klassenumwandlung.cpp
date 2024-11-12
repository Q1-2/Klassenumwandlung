#include <iostream>
#include <string>
using namespace std;

// Basisklasse Fahrzeug
class Fahrzeug {
protected:
    string hersteller;
    int leistung; // in PS

public:
    Fahrzeug(string h, int l) : hersteller(h), leistung(l) {} // Member-Initialisierungsliste 

    void zeigeInfo() {
        cout << "Hersteller: " << hersteller << ", Leistung: " << leistung << " PS" << endl;
    }
};

// Abgeleitete Klasse PKW
class PKW : public Fahrzeug {
private:
    int anzahlTueren;

public:
    PKW(string h, int l, int t) : Fahrzeug(h, l), anzahlTueren(t) {}

    void zeigeInfo() {
        Fahrzeug::zeigeInfo(); // Aufruf der Methode der Basisklasse
        cout << "Anzahl Türen: " << anzahlTueren << endl;
    }
};

// Funktion, die ein Fahrzeug erwartet
static void fahrzeugInfo(Fahrzeug f) {
    f.zeigeInfo();
}

int main() {
    Fahrzeug fz("BMW", 123);
    PKW meinPKW("Volkswagen", 150, 4);

    // meinPKW = fz; // Verboten
    fz = meinPKW; // implizite Umwandlung von PKW zu Fahrzeug; Datenverlust bei Tueren!
    // Implizite Umwandlung von PKW zu Fahrzeug
    fahrzeugInfo(meinPKW); // Der Compiler wandelt meinPKW automatisch in ein Fahrzeug um
    fahrzeugInfo(fz);



    return 0;
}