#pragma once

#include "ofMain.h"
#include "Virus.hpp"
#include <vector>

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    int PositionX, PositionY, movingSpeed, acceleration, score, width, height, offset, begin, current, generating_speed, time, virus_num;
    float start, end, duration, random_x, random_y;
    bool game_over, check;
    vector<Virus> myVirus;
    Virus v1;
    ofSoundPlayer musicloop;
    ofImage doctor;
};
