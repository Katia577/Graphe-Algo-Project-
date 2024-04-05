#include "Point.h"

Point::Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}

int Point::getX() const { return x; }
int Point::getY() const { return y; }