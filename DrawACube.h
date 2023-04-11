//
//  DrawACube.h
//  CS 232 Exam 2 Draw a Cube
//
//  Created by Melissa Gio on 3/23/23.
//

#ifndef DrawACube_h
#define DrawACube_h
#include <string>
using namespace std;

class DrawACube {

public:
    int getSide();
    void setSide(int sidePar);
    void displayCube();
    void drawSpaces(int numOfSpaces);
    void drawStars(int numOfStars);
    
    DrawACube();
    
private:
    int side;
    int stars;
    int spacesBefore;
    int spacesBetween;
    int spacesOnRightFace;
    int row;
    int col;
    string output;
    
};

#endif /* DrawACube_h */
