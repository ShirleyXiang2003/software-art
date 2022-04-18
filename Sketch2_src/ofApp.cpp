#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    position.set(ofGetWidth()/2, ofGetHeight()/2);
    RedColor1 = 0;
    GreenColor1 = 0;
    BlueColor1 = 0;
    radius1 = 60;
    radius2 = 300;
    ofSetBackgroundColor(255, 255, 255);
}

//--------------------------------------------------------------
void ofApp::update(){
    float currentTime = ofGetElapsedTimef();
    int offset = int(currentTime*100)%5;

    float ChangeTime = 5;

    radius1 = radius1 + offset;
    RedColor1 += currentTime/2;
    GreenColor1 += currentTime/3;
    BlueColor1 += currentTime/5;
    if (radius1 > 300)       radius1 = 60;
    if (RedColor1 > 255)     RedColor1 = 0;
    else if (GreenColor1 > 255)     GreenColor1 = 0;
    else if (BlueColor1 > 255)     BlueColor1 = 0;
    
    radius2 = radius2 - offset;
    RedColor2 += currentTime/5;
    GreenColor2 += currentTime/4;
    BlueColor2 += currentTime/7;
    
    if (radius2 < 60)       radius2 = 300;
    if (RedColor2 > 255)     RedColor2 = 0;
    else if (GreenColor2 > 255)     GreenColor2 = 0;
    else if (BlueColor2 > 255)     BlueColor2 = 0;
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(RedColor1, GreenColor1, BlueColor1);
    ofSetCircleResolution(100);
    ofDrawCircle(position, radius1);
    
    ofSetColor(RedColor2, GreenColor2, BlueColor2);
    ofSetCircleResolution(100);
    ofDrawCircle(position, radius2);
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
