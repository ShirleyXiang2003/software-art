//
//  Virus.cpp
//  Assignment3
//
//  Created by Xiang Zhushan on 2022/5/4.
//

#include "Virus.hpp"

void Virus::setup(){
    x = -300;
    y= -300;
    virus.loadImage("virus.png");
}

void Virus::draw(){
    
    virus.resize(40, 40);
    virus.draw(x,y);
}
