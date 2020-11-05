#include <iostream>

class ZZ {
private:
    std::string nom, prenom;
    double note;

public:
    ZZ();
    ZZ(const std::string n, const std::string p, const double note);
    ~ZZ();
    std::string getNom() const;
    std::string getPrenom() const;
    double getNote() const;
    friend bool operator<(const ZZ& l, const ZZ& r);
    friend std::ostream& operator<<(std::ostream& os, const ZZ& obj);
};