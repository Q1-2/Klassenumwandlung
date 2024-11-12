#include <iostream>
using namespace std;

class Fahrzeug {
public:
    virtual void zeigeInfo() {
        cout << "Ich bin ein Fahrzeug." << endl;
    }
};

class PKW : public Fahrzeug {
public:
    void zeigeInfo() override {
        cout << "Ich bin ein PKW." << endl;
    }
};

int main() {
    Fahrzeug* fz = new PKW();

    // Explizite Umwandlung von Fahrzeug* zu PKW*
    PKW* pkw = static_cast<PKW*>(fz); // Verwendung von static_cast

    pkw->zeigeInfo(); // Gibt "Ich bin ein PKW." aus

    delete fz; // Speicherfreigabe
    return 0;
}