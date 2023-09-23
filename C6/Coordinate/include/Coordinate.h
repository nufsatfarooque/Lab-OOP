#ifndef COORDINATE_H
#define COORDINATE_H


class Coordinate
{
    public:
        Coordinate(float a, float o);
        ~Coordinate();

        void display();
        float getDistance(Coordinate c);
        float getDistance() const;
        void move_x(float val);
        void move_y(float val);
        void move_(float val);

        bool operator > (const Coordinate c2) const;
        bool operator < (const Coordinate c2) const;
        bool operator >= (const Coordinate c2) const;
        bool operator <= (const Coordinate c2) const;
        bool operator == (const Coordinate c2) const;
        bool operator != (const Coordinate c2) const;
        Coordinate operator++();
        Coordinate operator++(int);
        Coordinate operator--();
        Coordinate operator--(int);
    private:
        float abscissa;
        float ordinate;
};

#endif // COORDINATE_H
