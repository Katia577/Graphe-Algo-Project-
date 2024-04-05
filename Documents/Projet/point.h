#ifndef POINT_H
#define POINT_H

class Point {
private:
    int x;
    int y;

public:
    Point(int xCoord, int yCoord);
    int getX() const;
    int getY() const;
};

#endif // POINT_H