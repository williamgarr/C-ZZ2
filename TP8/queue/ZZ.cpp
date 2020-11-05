#include "ZZ.hpp"

ZZ::ZZ() : nom(""), prenom(""), note(0.) {}

    ZZ::ZZ(const std::string n, const std::string p, const double note)
    : nom(n), prenom(p), note(note) {}

    ZZ::~ZZ() {}

    std::string ZZ::getNom() const
    {
        return nom;
    }

    std::string ZZ::getPrenom() const
    {
        return prenom;
    }

    double ZZ::getNote() const
    {
        return note;
    }

    bool operator<(const ZZ& l, const ZZ& r)
    {
        return l.getNote() < r.getNote();
    }

    std::ostream& operator<<(std::ostream& os, const ZZ& obj)
    {
        os << obj.getNom() << " " << obj.getPrenom() << " " << obj.getNote() << std::endl;
        return os;
    }