#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofToggleFullscreen();
    ofSetFrameRate(100);
    ofBackground (55,90,75);
    
    output.setName("Main");
    
    frameCount = 0;
    frame_comma_side = 25;
}

//--------------------------------------------------------------
void ofApp::update(){
    frameCount++;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    ofSetColor(255);
    ofSetLineWidth(4);
    
    figure.draw(frame_comma_side,frameCount);
    
    output.publishScreen();
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
