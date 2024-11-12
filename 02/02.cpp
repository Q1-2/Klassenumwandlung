#include <iostream>
#include <string>
using namespace std;

// Basisklasse Fahrzeug
class Fahrzeug {
protected:
    string hersteller;
    int leistung; // in PS

public:
    Fahrzeug(string h, int l) : hersteller(h), leistung(l) {}

    void ausgabe() {
        cout << hersteller << " " << leistung << endl;
    }
};

// Abgeleitete Klasse PKW
class PKW : public Fahrzeug {
private:
    int anzahlTueren;

public:
    PKW(string h, int l, int t) : Fahrzeug(h, l), anzahlTueren(t) {}

    // Konstruktor, der ein Fahrzeug-Objekt akzeptiert
    PKW(const Fahrzeug& f) : Fahrzeug(f) {
        anzahlTueren = 4; // Standardwert für PKW
    }

    void ausgabe() {
        cout << hersteller << " " << leistung << " " << anzahlTueren << endl;
    }
};

int main() {
    Fahrzeug fz("Volkswagen", 150);
    fz.ausgabe();

    PKW pkw("Audi", 180, 3);
    pkw.ausgabe();

    
    PKW pkwVonFz = fz;
 //   PKW pkwVonFz(fz); // Erstellen eines PKW-Objekts aus einem Fahrzeug-Objekt
    pkwVonFz.ausgabe();

    return 0;
}