## "The Greedy Robot"

A robot is positioned on an integral point in a two-dimensional coordinate grid (xr, yr). There is a treasure that has been placed at a point in the same grid at (xt, yt). All x’s and y’s are integers. The robot can move up (North), down (South), left (West), or right (East). Commands can be given to the robot to move one position in one of the four direction. That is, “E” moves a robot one slot East (to the right) so if the robot was on position (3, 4), it would now be on (4, 4). The command N would move the robot one position north so a robot at position (4, 4) would be at (4, 5).

Because the robot cannot move diagonally, the shortest distance between a robot at (xr, yr) and a treasure at (xt, yt) is:
```
| Xr - Xy | + | Yr - Yt | = ShortestPossibleDistance
```
The program determines all the unique shortest possible paths from the robot to the treasure with the following stipulation: The robot may never move in the same direction more than two times in a row.

The input to the program will be the starting position of the robot (xr, yr) and the position of the treasure (xt, yt). These will be in read from cin as four integers. For instance, an input of 1 3 -2 4 corresponds to the robot starting at position (1, 3) and needing to get to position (-2, 4). There is no error conditions on input as we will assume the input is well formed. Read the input from cin.
