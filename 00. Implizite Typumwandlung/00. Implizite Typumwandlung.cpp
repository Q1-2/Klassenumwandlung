#include <iostream>
using namespace std;

int main() {
    int zahlI = 5;       // Ganzzahl
    double zahlD = 1.4; // Gleitkommazahl

    // Implizite typeumwandlung von int zu double --> Kein Datenverlust.
    //zahlD = zahlI;
    // Typeumwandlung --> Datenverlust!
    // zahlI = zahlD; // implizite Typeumwandlung
    zahlI = static_cast<int>(zahlD); // explizit "vom Programmierere genannte und gewollte" Typumwandlung

    cout << "Ganzzahl: " << zahlI << endl;
    cout << "Gleitkommazahl: " << zahlD << endl;

    return 0;
}