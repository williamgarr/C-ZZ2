#ifndef POINT
#define POINT

/***
 * Name : Point
 * Desc : Gere un point de coordonnées x et y
*/
class Point {
    private:
        static int _compteur;
        int _x;
        int _y;

    public:
        // Constructor
        Point();
        Point(const int, const int);

        // Destructor
        ~Point();

        // Getter - Setter
        static int getCompteur();
        int getX();
        void setX(const int);
        int getY();
        void setY(const int);

        // Method
        void deplacerDe(const int, const int);
        void deplacerVers(const int, const int);
        void afficherPoint();
        static void afficherCompteur();
};

#endif