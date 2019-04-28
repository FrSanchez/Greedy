#include "Greedy.hpp"

using namespace std;

int CGreedy::move(int xr, int yr, std::string direction, int paths, int shortest, std::string path){
    int Dt = shortestDistance(xr, yr, Xt, Yt);
    path += direction;
    if (Dt > shortest) {
        return -1; // not a valid path
    }
    if (Dt == 0) { // reached destination
        // print the current path
        printPath(path);
        // add to the count, and return - no more calculation needed
        return paths + 1;
    }
    // make sure we don't move in the same direction more than two times
    string last2 = path.size() > 1 ? path.substr(path.size() -2) : "";
    int t;
    if (last2 != "NN") {
        t = move(xr, yr + 1, "N", 0, Dt, path );
        if (t > 0) { paths += t; }
    }
    if (last2 != "SS") {
        t = move(xr, yr - 1, "S", 0, Dt, path );
        if (t > 0) { paths += t; }
    }
    if (last2 != "EE") {
        t = move(xr + 1, yr, "E", 0, Dt, path );
        if (t > 0) { paths += t; }
    }
    if (last2 != "WW") {
        t = move(xr - 1, yr, "W", 0, Dt, path );
        if (t > 0) { paths += t; }
    }
    
    return paths;
}

int CGreedy::shortestDistance(int xr, int yr, int xt, int yt){
    return abs(xr - xt) + abs(yr - yt);
}

void CGreedy::printPath(std::string path) {
    std::cout << path + "\n";
}

int CGreedy::go(point robot, point treasure) {
    Xt = treasure.x;
    Yt = treasure.y;
    return move(robot.x, robot.y, "", 0, shortestDistance(robot.x, robot.y, treasure.x, treasure.y), "");
}
