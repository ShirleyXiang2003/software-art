#include "ofApp.h"
#include <cmath>
#include <vector>
#include <string>

//--------------------------------------------------------------
void ofApp::setup(){
    musicloop.load("background_music.mp3");
    doctor.load("doctor.png");
    musicloop.setVolume(0.6);
    musicloop.play();
    musicloop.setLoop(true);
    ofBackground(255, 134, 134);     //set background
    width = 80;
    height = 80;
    PositionX =ofGetWidth() /2;
    PositionY =ofGetHeight() /2;        //set initial position
    movingSpeed = 15;        //set initial speed
    acceleration = 0.2;     //set initial acceleration
    score = 0;      //set initial score
    start = ofGetElapsedTimef();        //start time
    game_over = false;
    myVirus.resize(400);
    myVirus.assign(400,Virus());
    myVirus.push_back(v1);        //default virus
    for (int t=0;t<myVirus.size();t++){
        myVirus[t].setup();
    }
    myVirus[0].x = 200;
    myVirus[0].y = 200;
    offset = 0;
    current = 1;
    generating_speed = 5;
    check = true;
    virus_num = 1;

}

//--------------------------------------------------------------
void ofApp::update(){
    //check game over
    if (virus_num >20)     game_over=true;
    //set boundary
    if (PositionY>ofGetHeight() || PositionY<0)     game_over=true;
    if (PositionX>ofGetWidth() || PositionX<0)     game_over=true;
    movingSpeed+=acceleration;      //update velocity
    
    if (offset == 0){
        time = duration;
        check = false;
        myVirus[current].x = random_x;
        myVirus[current].y = random_y;
    }

    if (check == false && duration <= time+0.01){
        check = true;
        current++;
        virus_num++;
        random_x = ofRandom(ofGetWidth()-100);
        random_y = ofRandom(ofGetHeight()-100);
        //cout<<virus_num<<endl;
    }
    
    //adjust generating speed
    if (duration<=20)     generating_speed=3;
    else if (duration>20)       generating_speed=1;
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    if (game_over == false){
        ofDrawBitmapString("Time: " + to_string(int(duration))+" seconds", 20, 20);
        ofDrawBitmapString("Score: " + to_string(score), 20, 40);
        ofDrawBitmapString("Instruction: ", 20, 60);
        ofDrawBitmapString("Press 'w' to go up", 20, 80);
        ofDrawBitmapString("Press 's' to go down", 20, 100);
        ofDrawBitmapString("Press 'a' to go left", 20, 120);
        ofDrawBitmapString("Press 'd' to go right", 20, 140);
        ofDrawBitmapString("Rule", ofGetWidth()-200, 20);
        ofDrawBitmapString("Wipe out the virus by stepping on it", ofGetWidth()-400, 80);
        ofDrawBitmapString("Viruses appear on the screen from time to time", ofGetWidth()-400, 40);
        ofDrawBitmapString("They appear faster and faster as time goes", ofGetWidth()-400, 60);
        ofDrawBitmapString("When there are more than 20 viruses on the screen,", ofGetWidth()-400, 100);
        ofDrawBitmapString("game over", ofGetWidth()-400, 120);
        ofDrawBitmapString("If the doctor goes out of screen, game over", ofGetWidth()-400, 140);
        myVirus[0].draw(); //load default virus
        doctor.draw(PositionX,PositionY);
        doctor.resize(width, height);
        end = ofGetElapsedTimef();      //ernd time
        duration = end - start;     //get duration
        offset = int(duration) % generating_speed;
        
        //check clash
        for (int i =0;i<=current;i++){
            if (sqrt(pow(myVirus[i].x-PositionX,2)+pow(myVirus[i].y-PositionY,2))<=20+width/2){
                myVirus[i].x = 10000;
                virus_num--;
                score++;        //increase score
            }
        }
        for (int n=0;n<=current;n++){
            myVirus[n].draw();
        }
        
    }
    // give message for game over
    else{
        ofDrawBitmapString("GAME OVER", ofGetWidth()/2 - 40, ofGetHeight()/2-40);
        ofDrawBitmapString("Your socre is "+to_string(score), ofGetWidth()/2 -60, ofGetHeight()/2-20);
        musicloop.stop();       //stop the background music
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key) {
        case 'w':       //move up
            PositionY-=movingSpeed;
            break;
            
        case 's':       //move down
            PositionY+=movingSpeed;
            break;
            
        case 'a':       //move to left
            PositionX-=movingSpeed;
            break;
            
        case 'd':       //move to right
            PositionX+=movingSpeed;
            break;
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
