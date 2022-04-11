    #include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gui.setup();
    gui.add(intSlider.setup("int slider",64,3,64));
    gui.add(floatSlider.setup("float slider",30.0,0.0,300.0));
    gui.add(toggle.setup("toggle",false));
    
    gui.add(intField.setup("int field", 100, 0, 100));
    gui.add(floatField.setup("float field",100.0,0.0,100.0));
    gui.add(textField.setup("text field","text"));
    gui.add(vec2Slider.setup("Width (x)  Number (y)", ofVec2f(0,0), ofVec2f(0,0), ofVec2f(20, 50)));
    gui.add(vec3Slider.setup("Color", ofVec3f(100,150,90), ofVec3f(0,0,0), ofVec3f(255,255,255)));
    ofSetFrameRate(20);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    if (toggle){
        for (int i =0; i<vec2Slider->y;i++){
            ofSetColor(vec3Slider->x, vec3Slider->y, vec3Slider->z);
            ofSetLineWidth(vec2Slider->x);
            ofDrawLine(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
        }
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
