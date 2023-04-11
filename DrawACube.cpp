//
//  DrawACube.cpp
//  CS 232 Exam 2 Draw a Cube
//
//  Created by Melissa Gio on 3/23/23.
//

#include "DrawACube.h"
#include <iostream>
using namespace std;


DrawACube::DrawACube(){
    side = 5; //user doesn't give us value then minimum side will be set to 5
    
}

int DrawACube::getSide(){
    return side;
}


void DrawACube::setSide(int sidePar){
    if (sidePar %2 == 1 && sidePar >= 5) {
        side = sidePar;
    } //side must be an odd number and greater than 5
}


void DrawACube::displayCube(){
    //declarations
    spacesBefore = side - 1;
    spacesBetween = side - 2;
    spacesOnRightFace = 0;
    
    //***draw part 1 - top row (green)
    
    drawSpaces(spacesBefore);    //draw initial spaces
    drawStars(side);   //draw stars,     number of stars will depend on the users number
    cout << endl;
    
    //***draw part 2 - slanted row (red)
    spacesBefore--;
    
    for (int i = 0; i < side - 2; i++) {

    drawSpaces(spacesBefore);    //draw spaces
    drawStars(1);   //draw a star
    drawSpaces(spacesBetween);  //draw between spaces
    drawStars(1);   //draw a star
    drawSpaces(spacesOnRightFace);    //draw spaces on right face
    drawStars(1);    //draw star

        cout << endl;
        spacesBefore--;
        spacesOnRightFace++;
    }
    //***draw part 3 - middle of cube (yellow)
    drawStars(side);
    drawSpaces(spacesOnRightFace);
    drawStars(1);
    cout << endl;
    
    //***draw part 4 - front face of cube (bottom red)
    spacesBetween = side - 2;
    for (int i = 0; i < side - 2; i++) {
        drawStars(1);
        drawSpaces(spacesBetween);
        drawStars(1);
        drawSpaces(spacesOnRightFace - 1);
        drawStars(1);
        cout << endl;
        spacesBefore ++;
        spacesOnRightFace --;
    }
    
    //***draw part 5 - last row
    drawStars(side);
    drawSpaces(side - 1);
    cout << endl;
    
}


void DrawACube::drawSpaces(int numOfSpaces){
    for (int i = 0; i < numOfSpaces; i++) {
        cout << " ";
    }
    
}


void DrawACube::drawStars(int numOfStars){
    for (int i = 0; i < numOfStars; i++) {
        cout << "*";
    }
}


