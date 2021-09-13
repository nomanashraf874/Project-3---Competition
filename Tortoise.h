//google "pragma once" to see what directive means.
#pragma once

//google "include guard" or "header guard" to see
//what the following ifndef/define/endif means.
//motivation: avoid to include a header file more than once
//in a project.
#ifndef TORTOISE_H_ 
#define TORTOISE_H_
class Tortoise {
    public: 
        Tortoise(); 
    
        ~Tortoise(); 

        Tortoise(int* pattern, int length, int position);

        int getPosition() const;
  
        void setPosition(int newPosition);
 
        void move();

        int* getPattern() const;

        int getPatternLength() const;
        
    private:
        const int length;
        int position;
        int *pattern;
};

#endif