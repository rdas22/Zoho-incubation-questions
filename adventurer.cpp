//Question 1 (Puzzle Question)

#include <iostream>

using namespace std;

/*
    rows and columns- dimensions of dungeon
    xa- x position of adventurer
    ya- y position of adventurer
    xg- x position of gold
    yg- y position of gold
*/

int main() {
    int rows,columns;
    int xa,ya,xg,yg;
    cin>>rows>>columns;
    cin>>xa>>ya;
    cin>>xg>>yg;
    int result=abs(xg-xa)+abs(yg-ya);
    cout<<"Minimum number of steps: "<<result;
}
