//
//  main.cpp
//  greedy
//
//  Created on 4/28/19.
//  Copyright © 2019 . All rights reserved.
//

#include <iostream>
#include "Greedy.hpp"

int main(int argc, const char * argv[]) {
    point robot;
    point treasure;
    std::cout << "Xr: ";
    std::cin >> robot.x;
    std::cout << "Yr: ";
    std::cin >> robot.y;
    std::cout << "Xt: ";
    std::cin >> treasure.x;
    std::cout << "Yt: ";
    std::cin >> treasure.y;
    CGreedy greedy;
    int t = 0, paths = 0;
    t = greedy.go(robot, treasure);
    if (t >= 0) {
        paths = t;
    }
    std::cout << "Number of paths: " << paths << '\n';
    return 0;
}
