#include "ofApp.h"
#include "ofxGui.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gui.setup();
    ofBackground(255,255,255);

    gui.add(intSlider.set("Length of box",100,3,200));
    gui.add(floatSlider.set("Radius of sphere",100.0,3.0,200.0));
    gui.add(floatSlider2.set("Width of lines",0.0,-5.0,10.0));
    
    gui.add(sphere.setup("Sphere",false));
    gui.add(box.setup("Box",true));
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    if (box){
        ofSetColor(255, 0, 0);
        ofDrawBox(200, 400, 100, intSlider, intSlider, intSlider);
        ofDrawBox(800, 600, 100, intSlider, intSlider, intSlider);
        
        ofSetColor(255, 215, 0);
        ofDrawBox(500, 200, 300, intSlider, intSlider, intSlider);
        
        ofSetColor(0, 0, 0);
        ofSetLineWidth(10+floatSlider2);
        ofDrawLine(117, 0, 100, 117, 1000, 100);
        ofDrawLine(225, 0, 100, 225, 1000, 100);
        ofDrawLine(270, 0, 100, 270, 1000, 100);
        ofDrawLine(470, 0, 100, 470, 1000, 100);

        ofSetColor(0, 0, 205);
        ofDrawBox(500, 500, 500, intSlider, intSlider, intSlider);
        ofDrawBox(800, 200, 100, intSlider, intSlider, intSlider);
        
        ofSetColor(0, 0, 0);
        ofSetLineWidth(5+floatSlider2);
        ofDrawLine(0, 40, 100, 1000, 400, 100);
        ofDrawLine(0, 40, 100, 1000, 100, 100);
        ofDrawLine(0,500,283,1000,500,283);
        ofDrawLine(800, 0, 100, 800, 800, 100);
        
        ofSetLineWidth(2+floatSlider2);
        ofDrawLine(0,500,400,1000,500,400);
        
        ofSetColor(0, 0, 0);
        ofDrawBox(600, 260, 100, intSlider, intSlider, intSlider);
    }
    
    else if (sphere){
        ofSetColor(255, 0, 0);
        ofDrawSphere(200, 400, 100, floatSlider);
        ofDrawSphere(800, 600, 100, floatSlider);
        
        ofSetColor(255, 215, 0);
        ofDrawSphere(500, 200, 300, floatSlider);
        
        ofSetColor(0, 0, 0);
        ofSetLineWidth(10+floatSlider2);
        ofDrawLine(117, 0, 100, 117, 1000, 100);
        ofDrawLine(225, 0, 100, 225, 1000, 100);
        ofDrawLine(270, 0, 100, 270, 1000, 100);
        ofDrawLine(470, 0, 100, 470, 1000, 100);

        ofSetColor(0, 0, 205);
        ofDrawSphere(500, 500, 500, floatSlider);
        ofDrawSphere(800, 200, 100, floatSlider);
        
        ofSetColor(0, 0, 0);
        ofSetLineWidth(5+floatSlider2);
        ofDrawLine(0, 40, 100, 1000, 400, 100);
        ofDrawLine(0, 40, 100, 1000, 100, 100);
        ofDrawLine(0,500,283,1000,500,283);
        ofDrawLine(800, 0, 100, 800, 800, 100);
        
        ofSetLineWidth(2+floatSlider2);
        ofDrawLine(0,500,400,1000,500,400);
        
        ofSetColor(0, 0, 0);
        ofDrawSphere(600, 260, 100, floatSlider);
    }
    
    gui.draw();
 
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
   
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
