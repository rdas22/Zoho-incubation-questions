//Question 2 (Puzzle Question)

#include <iostream>

using namespace std;

/*
    rows and columns- dimensions of dungeon
    xa- x position of adventurer
    ya- y position of adventurer
    xm- x position of monster
    ym- y position of monster
    xg- x position of gold
    yg- y position of gold

    ----------------------------------

    stepsAd-  steps required by adventurer to real gold
    stepsMon- steps required by monster to real gold
*/

int main() {
    int rows,columns;
    int xa,ya,xg,yg,xm,ym;
    cin>>rows>>columns;
    cin>>xa>>ya;
    cin>>xm>>ym;
    cin>>xg>>yg;
    int stepsAd=abs(xg-xa)+abs(yg-ya);
    int stepsMon=abs(xg-xm)+abs(yg-ym);
    if(stepsMon<stepsAd)
        cout<<"No possible solution";
    else
        cout<<"Minimum number of steps: "<<stepsAd;
}
