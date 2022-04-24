#include "ofApp.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(20);
    musicloop.load("/Users/xiangzhushan/Desktop/music.mp3");
    volume = 0.6;
    musicloop.setVolume(volume);
    musicloop.play();
    musicloop.setLoop(true);
    offsetParameter = 100;
    ofNoFill();
    ofBackground(0);
    ofSetLineWidth(5);
    ofTexture floor;
    //load images of four flowers
    flower1A.load("/Users/xiangzhushan/Desktop/flower1.png");
    flower1B.load("/Users/xiangzhushan/Desktop/flower1.png");
    flower2.load("/Users/xiangzhushan/Desktop/flower2.png");
    flower3A.load("/Users/xiangzhushan/Desktop/flower3.png");
    flower3B.load("/Users/xiangzhushan/Desktop/flower3.png");
    flower3C.load("/Users/xiangzhushan/Desktop/flower3.png");
    flower3D.load("/Users/xiangzhushan/Desktop/flower3.png");
    flower3E.load("/Users/xiangzhushan/Desktop/flower3.png");
    flower3F.load("/Users/xiangzhushan/Desktop/flower3.png");
    flower3G.load("/Users/xiangzhushan/Desktop/flower3.png");
    flower4A.load("/Users/xiangzhushan/Desktop/flower4.png");
    flower4B.load("/Users/xiangzhushan/Desktop/flower4.png");
    background.load("/Users/xiangzhushan/Desktop/background.png");
    flower1A.rotate90(1);    //rotate the image by 90 degree
    flower1B.rotate90(1);    //rotate the image by 180 degree
    flower1B.mirror(false, true);   //mirror the image
    velocityPetal = velocityFlowerA = velocityFlowerB = 0.0; //set initial value for velocity;
    gravityPetal = 9.81; // set initial value for gravity;
    gravityFlowerA = 2;
    gravityFlowerB = 1.2;
    max1=5.0;
    max2 = 1;
    flag = false;
}

//--------------------------------------------------------------
void ofApp::update(){
    currentTime = ofGetElapsedTimef();
    offset = int(currentTime*150) % offsetParameter;
    velocityPetal += gravityPetal; //update velocity for petals
    velocityFlowerA += gravityFlowerA; //update velocity for flowerA
    velocityFlowerB += gravityFlowerB; // update velocity for flowerB
    velocityFlowerA = int(velocityFlowerA) % ofGetHeight(); // offset velocity
    velocityFlowerB = int(velocityFlowerB) % ofGetHeight();
    if (volume < 0)     volume = 0;
    musicloop.setVolume(volume); //update volume

}

//--------------------------------------------------------------
void ofApp::draw(){

    if (flag){
        background.draw(0,0);
        background.resize(ofGetWidth(), ofGetHeight());
    }
    ofPushMatrix();         //translation starts
    //ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    // draw petals
    for (int i=0;i<800;i+=10){
        //ofDrawRectangle(i, 0, 20, 20);
        flower2.draw(i*ofRandom(max1), 10+velocityPetal*ofRandom(max2));
        flower2.resize(22, 22);
    
    }
    // draw flowers3
    flower3A.draw(0, 150+velocityFlowerA);
    flower3A.resize(60,60);
    flower3A.rotate90(offset/90);
    flower3B.draw(800, -150+velocityFlowerA);
    flower3B.rotate90(0.1+offset/90*0.63);
    flower3B.resize(50,50);
    flower3B.rotate90(0.3+offset/90*3);
    flower3C.draw(600, -250+velocityFlowerA);
    flower3C.resize(30,30);
    flower3C.rotate90(0.5+offset/90);
    flower3D.draw(200, 80+velocityFlowerA);
    flower3D.resize(20,20);
    flower3D.rotate90(0.4+offset/90*2.5);
    flower3E.draw(500, 260+velocityFlowerA);
    flower3E.resize(60,60);
    flower3E.rotate90(0.2+offset/90*2.7);
    flower3F.draw(1000, 400+velocityFlowerA);
    flower3F.resize(40,40);
    flower3F.rotate90(0.32+offset/90*1.1);
    flower3G.draw(1300, 100+velocityFlowerA);
    flower3G.resize(50,50);
    flower3G.rotate90(0.21+offset/90);
   
    //draw flowers4
    flower4A.draw(100, 100+velocityFlowerB);
    flower4A.resize(70, 70);
    flower4A.rotate90(offset/90);
    
    flower4B.draw(700, -100+velocityFlowerB);
    flower4B.resize(75, 75);
    flower4B.rotate90(offset/90+0.5);
    
    ofPopMatrix();      //translation ends
    ofDrawBitmapString("This is a story across space...", 20, 20);      //message
    ofDrawBitmapString("Volume: "+to_string(volume), 20, 40);
    
    //draw still flower trees
    flower1A.draw(0, 40);
    flower1B.draw(ofGetWidth()-flower1B.getWidth(),flower1B.getHeight());
    flower1B.resize(300, 300);
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    // turn up volume by 0.1
    if (key == 'w'){
        volume+=0.1;
        //cout<<volume<<endl;
    }
    //turn down volume by 0.1
    if (key == 's'){
        volume-=0.1;
        //cout<<volume<<endl;
    }
    if (key == 'b'){
        flag = true;
    }
    if (key == 'c'){
        flag = false;
    }
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
