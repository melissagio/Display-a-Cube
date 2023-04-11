//
//  main.cpp
//  CS 232 Exam 2 Draw a Cube
//
//  Created by Melissa Gio on 3/23/23.
//

#include <iostream>
#include "DrawACube.h"

using namespace std;

int main() {
    //declarations
    int userInput;
    DrawACube myCube;
    
    //get user input
    cout << "Enter a side value: ";
    cin >> userInput;
    
    myCube.setSide(userInput);  //will give the set side funtion the user number
    //calculations
    
    
    //output
    myCube.displayCube();

    
    return 0;
}
