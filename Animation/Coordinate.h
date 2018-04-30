//
// Created by Gio Panlertkitsakul on 30/4/18.
//

#ifndef SFMLDEMO_COORDINATE_H
#define SFMLDEMO_COORDINATE_H


class Coordinate {
public:
    Coordinate() : top(0), bottom(0), left(0), right(0) {}

    Coordinate(int _top, int _left, int _bottom, int _right) : top(_top), left(_left), bottom(_bottom), right(_right) {}

    int getTop() {
        return top;
    }

    int getBottom() {
        return bottom;
    }

    int getLeft() {
        return left;
    }

    int getRight() {
        return right;
    }

    int getWidth() {
        return right - left;
    }

    int getHeight() {
        return bottom - top;
    }

private:
    int top;
    int bottom;
    int right;
    int left;
};


#endif //SFMLDEMO_COORDINATE_H
