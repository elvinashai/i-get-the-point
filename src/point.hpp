#ifndef POINT_Hpp
#define POINT_Hpp

#include <iostream>

class Point {
private:
    double x;
    double y;

public:
    Point(double xCoord, double yCoord);

    double getX() const;
    double getY() const;

    double operator-(const Point& other) const;
    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;
    Point operator/(const Point& other) const;
    Point operator*(double value) const;
    double operator[](char coord) const;

    friend std::ostream& operator<<(std::ostream& os, const Point& p);
};

#endif