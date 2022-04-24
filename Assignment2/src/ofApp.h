#pragma once

#include "ofMain.h"

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
    
    ofSoundPlayer musicloop;
    float currentTime;
    int offset;
    int offsetParameter;
    float volume;
    ofImage flower1A, flower1B, flower2, flower3A, flower3B, flower3C, flower3D, flower3E, flower3F, flower3G, flower4A, flower4B, background;
    float velocityPetal;
    float gravityPetal;
    float velocityFlowerA;
    float gravityFlowerA;
    float velocityFlowerB;
    float gravityFlowerB;
    float velocityFlowerC, gravityFlowerC;
    float max1, max2;
    bool flag;
    
		
};
