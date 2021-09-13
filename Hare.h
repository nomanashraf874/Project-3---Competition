#pragma once

#ifndef HARE_H //include guard or header guard
#define HARE_H
class Hare
{
public:
    Hare();
    Hare(int* pattern, int length, int position);
    //Hare(int* , int , int );
    ~Hare(); //release dynamically allocated memory,
        //that is, memory allocated through new keyword.

    int getPosition() const;
        //const AFTER int getPosition() means
        //this function member -- getPosition() --
        //does not change the data members of Hare object,
        //read-only operation.
     void setPosition(int newPosition);
        //Question: can we use the following declaration?
        // void setPosition(int newPosition) const;
        //NO, since in function member setPosition,
        //we are going to update data member position,
        //so this function member is not read-only operation
        //for the object.
     int* getPattern() const;
        //return pattern as an array
     int getPatternLength() const;
     void move(); 
         //change the current position, depending on move pattern

private:
    const int length; //the size of an array is const
    int* pattern;
    int position;
}; //do not forget ;
#endif