#include "Point.hpp"
#include <cmath>
#include <stdexcept>

Point::Point(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

double Point::getX() const {
   return x;
}

double Point::getY() const {
   return y;
}

double Point::operator-(const Point& other) const {
   return std::sqrt(std::pow(other.x - x, 2) + std::pow(other.y - y, 2));
}

bool Point::operator==(const Point& other) const {
   return x == other.x && y == other.y;
}

bool Point::operator!=(const Point& other) const {
   return !(*this == other);
}

Point Point::operator/(const Point& other) const {
   return Point((x + other.x) / 2.0, (y + other.y) / 2.0);
}

Point Point::operator*(double value) const {
   return Point(x * value, y * value);
}

double Point::operator[](char coord) const {
   if (coord == 'x' || coord == 'X') return x;
   if (coord == 'y' || coord == 'Y') return y;
   throw std::invalid_argument("Use 'x' or 'y'");
}

std::ostream& operator<<(std::ostream& os, const Point& p) {
   os << "(" << p.x << ", " << p.y << ")";
   return os;
}
