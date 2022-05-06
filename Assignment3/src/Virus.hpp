//
//  Virus.hpp
//  Assignment3
//
//  Created by Xiang Zhushan on 2022/5/4.
//

#ifndef Virus_hpp
#define Virus_hpp

#include "ofMain.h"
#include <stdio.h>

class Virus{
public:
    void setup();
    void draw();
    
    int x, y;
    ofImage virus;
};
#endif /* Virus_hpp */
