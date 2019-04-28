#pragma once

#include <iostream>
#include "Point.h"

class CGreedy {
private:
    int Xt;
    int Yt;
    int move(int xr, int yr, std::string direction, int paths, int shortest, std::string path);
    int shortestDistance(int xr, int yr, int xt, int yt);
    void printPath(std::string path);
public:
    int go(point robot, point treasure);
};
