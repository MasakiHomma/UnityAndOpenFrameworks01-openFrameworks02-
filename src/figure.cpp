//
//  figure.cpp
//  Syphon_01
//
//  Created by 本間　理起 on 2017/04/02.
//
//

#include "figure.hpp"

//--------------------------------------------------------------
void figure::hexagon(float center_coordinate_x,float center_coordinate_y,float radius,int frame_comma_side,int frameCount) {
    float * pointArray = new float[12];
    for (int i = 0;i < 6;i++) {
        pointArray[i*2] = center_coordinate_x - cos(((float)i/3+(1/6))*PI) * radius;
        pointArray[i*2+1] = center_coordinate_y - sin(((float)i/3+(1/6))*PI) * radius;
    }
    
    float side_length = ((pointArray[0]-pointArray[2])*(pointArray[0]-pointArray[2]))+((pointArray[1]-pointArray[3])*(pointArray[1]-pointArray[3]));
    side_length = sqrt(side_length);
    
    while (frameCount >= (frame_comma_side*10)) {
        frameCount -= (frame_comma_side*10);
    }
    
    switch ((frameCount/frame_comma_side)%10) {
        case 0:
            ofDrawLine(pointArray[2], pointArray[3], pointArray[2] + cos((100/frame_comma_side)*(float)((120/(100/frame_comma_side))+2.4*frameCount)*PI/180) * side_length, pointArray[3] + sin((100/frame_comma_side)*(float)((120/(100/frame_comma_side))+2.4*frameCount)*PI/180) * side_length);
            ofDrawLine(pointArray[2], pointArray[3], pointArray[4], pointArray[5]);
            ofDrawLine(pointArray[4], pointArray[5], pointArray[6], pointArray[7]);
            ofDrawLine(pointArray[6], pointArray[7], pointArray[8], pointArray[9]);
            ofDrawLine(pointArray[8], pointArray[9], pointArray[10], pointArray[11]);
            ofDrawLine(pointArray[10], pointArray[11], pointArray[0], pointArray[1]);
            break;
        case 1:
            ofDrawLine(pointArray[4], pointArray[5], pointArray[4] + cos((100/frame_comma_side)*(float)(2.4*frameCount-(60/(100/frame_comma_side)))*PI/180) * side_length, pointArray[5] + sin((100/frame_comma_side)*(float)(2.4*frameCount-(60/(100/frame_comma_side)))*PI/180) * side_length);
            ofDrawLine(pointArray[4], pointArray[5], pointArray[6], pointArray[7]);
            ofDrawLine(pointArray[6], pointArray[7], pointArray[8], pointArray[9]);
            ofDrawLine(pointArray[8], pointArray[9], pointArray[10], pointArray[11]);
            ofDrawLine(pointArray[10], pointArray[11], pointArray[0], pointArray[1]);
            break;
        case 2:
            ofDrawLine(pointArray[6], pointArray[7], pointArray[6] + cos((100/frame_comma_side)*(float)((120/(100/frame_comma_side))+2.4*frameCount)*PI/180) * side_length, pointArray[7] + sin((100/frame_comma_side)*(float)((120/(100/frame_comma_side))+2.4*frameCount)*PI/180) * side_length);
            ofDrawLine(pointArray[6], pointArray[7], pointArray[8], pointArray[9]);
            ofDrawLine(pointArray[8], pointArray[9], pointArray[10], pointArray[11]);
            ofDrawLine(pointArray[10], pointArray[11], pointArray[0], pointArray[1]);
            break;
        case 3:
            ofDrawLine(pointArray[8], pointArray[9], pointArray[8] + cos((100/frame_comma_side)*(float)(2.4*frameCount-(60/(100/frame_comma_side)))*PI/180) * side_length, pointArray[9] + sin((100/frame_comma_side)*(float)(2.4*frameCount-(60/(100/frame_comma_side)))*PI/180) * side_length);
            ofDrawLine(pointArray[8], pointArray[9], pointArray[10], pointArray[11]);
            ofDrawLine(pointArray[10], pointArray[11], pointArray[0], pointArray[1]);
            break;
        case 4:
            ofDrawLine(pointArray[10], pointArray[11], pointArray[10] + cos((100/frame_comma_side)*(float)((120/(100/frame_comma_side))+2.4*frameCount)*PI/180) * side_length, pointArray[11] + sin((100/frame_comma_side)*(float)((120/(100/frame_comma_side))+2.4*frameCount)*PI/180) * side_length);
            ofDrawLine(pointArray[10], pointArray[11], pointArray[0], pointArray[1]);
            break;
        case 5:
            ofDrawLine(pointArray[10], pointArray[11], pointArray[10] + cos((100/frame_comma_side)*(float)(-2.4*frameCount)*PI/180) * side_length, pointArray[11] + sin((100/frame_comma_side)*(float)(-2.4*frameCount)*PI/180) * side_length);
            ofDrawLine(pointArray[10], pointArray[11], pointArray[0], pointArray[1]);
            break;
        case 6:
            ofDrawLine(pointArray[8], pointArray[9], pointArray[8] + cos((100/frame_comma_side)*(float)((180/(100/frame_comma_side))-2.4*frameCount)*PI/180) * side_length, pointArray[9] + sin((100/frame_comma_side)*(float)((180/(100/frame_comma_side))-2.4*frameCount)*PI/180) * side_length);
            ofDrawLine(pointArray[8], pointArray[9], pointArray[10], pointArray[11]);
            ofDrawLine(pointArray[10], pointArray[11], pointArray[0], pointArray[1]);
            break;
        case 7:
            ofDrawLine(pointArray[6], pointArray[7], pointArray[6] + cos((100/frame_comma_side)*(float)(-2.4*frameCount)*PI/180) * side_length, pointArray[7] + sin((100/frame_comma_side)*(float)(-2.4*frameCount)*PI/180) * side_length);
            ofDrawLine(pointArray[6], pointArray[7], pointArray[8], pointArray[9]);
            ofDrawLine(pointArray[8], pointArray[9], pointArray[10], pointArray[11]);
            ofDrawLine(pointArray[10], pointArray[11], pointArray[0], pointArray[1]);
            break;
        case 8:
            ofDrawLine(pointArray[4], pointArray[5], pointArray[4] + cos((100/frame_comma_side)*(float)((180/(100/frame_comma_side))-2.4*frameCount)*PI/180) * side_length, pointArray[5] + sin((100/frame_comma_side)*(float)((180/(100/frame_comma_side))-2.4*frameCount)*PI/180) * side_length);
            ofDrawLine(pointArray[4], pointArray[5], pointArray[6], pointArray[7]);
            ofDrawLine(pointArray[6], pointArray[7], pointArray[8], pointArray[9]);
            ofDrawLine(pointArray[8], pointArray[9], pointArray[10], pointArray[11]);
            ofDrawLine(pointArray[10], pointArray[11], pointArray[0], pointArray[1]);
            break;
        case 9:
            ofDrawLine(pointArray[2], pointArray[3], pointArray[2] + cos((100/frame_comma_side)*(float)(-2.4*frameCount)*PI/180) * side_length, pointArray[3] + sin((100/frame_comma_side)*(float)(-2.4*frameCount)*PI/180) * side_length);
            ofDrawLine(pointArray[2], pointArray[3], pointArray[4], pointArray[5]);
            ofDrawLine(pointArray[4], pointArray[5], pointArray[6], pointArray[7]);
            ofDrawLine(pointArray[6], pointArray[7], pointArray[8], pointArray[9]);
            ofDrawLine(pointArray[8], pointArray[9], pointArray[10], pointArray[11]);
            ofDrawLine(pointArray[10], pointArray[11], pointArray[0], pointArray[1]);
            break;
    }
}

//--------------------------------------------------------------
void figure::pentagon (float center_coordinate_x,float center_coordinate_y,float radius,int frame_comma_side,int frameCount) {
    float * pointArray = new float[10];
    for (int i = 0;i < 5;i++) {
        pointArray[i*2] = center_coordinate_x - cos((0.4*i+0.1)*PI) * radius;
        pointArray[i*2+1] = center_coordinate_y - sin((0.4*i+0.1)*PI) * radius;
    }
    
    float side_length = ((pointArray[0]-pointArray[2])*(pointArray[0]-pointArray[2]))+((pointArray[1]-pointArray[3])*(pointArray[1]-pointArray[3]));
    side_length = sqrt(side_length);
    
    while (frameCount >= (frame_comma_side*8)) {
        frameCount -= (frame_comma_side*8);
    }
    
    switch ((frameCount/frame_comma_side)%8) {
        case 0:
            ofDrawLine(pointArray[2], pointArray[3], pointArray[2] + cos((100/frame_comma_side)*(float)(2.52*frameCount+(144/(100/frame_comma_side)))*PI/180) * side_length, pointArray[3] + sin((100/frame_comma_side)*(float)(2.52*frameCount+(144/(100/frame_comma_side)))*PI/180) * side_length);
            ofDrawLine(pointArray[2], pointArray[3], pointArray[4], pointArray[5]);
            ofDrawLine(pointArray[4], pointArray[5], pointArray[6], pointArray[7]);
            ofDrawLine(pointArray[6], pointArray[7], pointArray[8], pointArray[9]);
            ofDrawLine(pointArray[8], pointArray[9], pointArray[0], pointArray[1]);
            break;
        case 1:
            ofDrawLine(pointArray[4], pointArray[5], pointArray[4] + cos((100/frame_comma_side)*(float)(2.52*frameCount-(36/(100/frame_comma_side)))*PI/180) * side_length, pointArray[5] + sin((100/frame_comma_side)*(float)(2.52*frameCount-(36/(100/frame_comma_side)))*PI/180) * side_length);
            ofDrawLine(pointArray[4], pointArray[5], pointArray[6], pointArray[7]);
            ofDrawLine(pointArray[6], pointArray[7], pointArray[8], pointArray[9]);
            ofDrawLine(pointArray[8], pointArray[9], pointArray[0], pointArray[1]);
            break;
        case 2:
            ofDrawLine(pointArray[6], pointArray[7], pointArray[6] + cos((100/frame_comma_side)*(float)(2.52*frameCount+(144/(100/frame_comma_side)))*PI/180) * side_length, pointArray[7] + sin((100/frame_comma_side)*(float)(2.52*frameCount+(144/(100/frame_comma_side)))*PI/180) * side_length);
            ofDrawLine(pointArray[6], pointArray[7], pointArray[8], pointArray[9]);
            ofDrawLine(pointArray[8], pointArray[9], pointArray[0], pointArray[1]);
            break;
        case 3:
            ofDrawLine(pointArray[8], pointArray[9], pointArray[8] + cos((100/frame_comma_side)*(float)(2.52*frameCount-(36/(100/frame_comma_side)))*PI/180) * side_length, pointArray[9] + sin((100/frame_comma_side)*(float)(2.52*frameCount-(36/(100/frame_comma_side)))*PI/180) * side_length);
            ofDrawLine(pointArray[8], pointArray[9], pointArray[0], pointArray[1]);
            break;
        case 4:
            ofDrawLine(pointArray[8], pointArray[9], pointArray[8] + cos((100/frame_comma_side)*(float)-(2.52*frameCount-(180/(100/frame_comma_side)))*PI/180) * side_length, pointArray[9] + sin((100/frame_comma_side)*(float)-(2.52*frameCount-(180/(100/frame_comma_side)))*PI/180) * side_length);
            ofDrawLine(pointArray[8], pointArray[9], pointArray[0], pointArray[1]);
            break;
        case 5:
            ofDrawLine(pointArray[6], pointArray[7], pointArray[6] + cos((100/frame_comma_side)*(float)(-2.52*frameCount)*PI/180) * side_length, pointArray[7] + sin((100/frame_comma_side)*(float)(-2.52*frameCount)*PI/180) * side_length);
            ofDrawLine(pointArray[6], pointArray[7], pointArray[8], pointArray[9]);
            ofDrawLine(pointArray[8], pointArray[9], pointArray[0], pointArray[1]);
            break;
        case 6:
            ofDrawLine(pointArray[4], pointArray[5], pointArray[4] + cos((100/frame_comma_side)*(float)(-2.52*frameCount-(180/(100/frame_comma_side)))*PI/180) * side_length, pointArray[5] + sin((100/frame_comma_side)*(float)(-2.52*frameCount-(180/(100/frame_comma_side)))*PI/180) * side_length);
            ofDrawLine(pointArray[4], pointArray[5], pointArray[6], pointArray[7]);
            ofDrawLine(pointArray[6], pointArray[7], pointArray[8], pointArray[9]);
            ofDrawLine(pointArray[8], pointArray[9], pointArray[0], pointArray[1]);
            break;
        case 7:
            ofDrawLine(pointArray[2], pointArray[3], pointArray[2] + cos((100/frame_comma_side)*(float)(-2.52*frameCount)*PI/180) * side_length, pointArray[3] + sin((100/frame_comma_side)*(float)(-2.52*frameCount)*PI/180) * side_length);
            ofDrawLine(pointArray[2], pointArray[3], pointArray[4], pointArray[5]);
            ofDrawLine(pointArray[4], pointArray[5], pointArray[6], pointArray[7]);
            ofDrawLine(pointArray[6], pointArray[7], pointArray[8], pointArray[9]);
            ofDrawLine(pointArray[8], pointArray[9], pointArray[0], pointArray[1]);
            break;
    }
}

//--------------------------------------------------------------
void figure::quadrangle(float center_coordinate_x,float center_coordinate_y,float radius,int frame_comma_side,int frameCount) {
    float * pointArray = new float[8];
    for (int i = 0;i < 4;i++) {
        pointArray[i*2] = center_coordinate_x - cos((0.5*i+0.25)*PI) * radius;
        pointArray[i*2+1] = center_coordinate_y - sin((0.5*i+0.25)*PI) * radius;
    }
    
    float side_length = ((pointArray[0]-pointArray[2])*(pointArray[0]-pointArray[2]))+((pointArray[1]-pointArray[3])*(pointArray[1]-pointArray[3]));
    side_length = sqrt(side_length);
    
    while (frameCount >= (frame_comma_side*6)) {
        frameCount -= (frame_comma_side*6);
    }
    
    switch ((frameCount/frame_comma_side)%6) {
        case 0:
            ofDrawLine(pointArray[2], pointArray[3], pointArray[2] + cos((100/frame_comma_side)*(float)(2.7*frameCount+(180/(100/frame_comma_side)))*PI/180) * side_length, pointArray[3] + sin((100/frame_comma_side)*(float)(2.7*frameCount+(180/(100/frame_comma_side)))*PI/180) * side_length);
            ofDrawLine(pointArray[2], pointArray[3], pointArray[4], pointArray[5]);
            ofDrawLine(pointArray[4], pointArray[5], pointArray[6], pointArray[7]);
            ofDrawLine(pointArray[6], pointArray[7], pointArray[0], pointArray[1]);
            break;
        case 1:
            ofDrawLine(pointArray[4], pointArray[5], pointArray[4] + cos((100/frame_comma_side)*(float)(2.7*frameCount)*PI/180) * side_length, pointArray[5] + sin((100/frame_comma_side)*(float)(2.7*frameCount)*PI/180) * side_length);
            ofDrawLine(pointArray[4], pointArray[5], pointArray[6], pointArray[7]);
            ofDrawLine(pointArray[6], pointArray[7], pointArray[0], pointArray[1]);
            break;
        case 2:
            ofDrawLine(pointArray[6], pointArray[7], pointArray[6] + cos((100/frame_comma_side)*(float)(2.7*frameCount+(180/(100/frame_comma_side)))*PI/180) * side_length, pointArray[7] + sin((100/frame_comma_side)*(float)(2.7*frameCount+(180/(100/frame_comma_side)))*PI/180) * side_length);
            ofDrawLine(pointArray[6], pointArray[7], pointArray[0], pointArray[1]);
            break;
        case 3:
            ofDrawLine(pointArray[6], pointArray[7], pointArray[6] + cos((100/frame_comma_side)*(float)(-2.7*frameCount)*PI/180) * side_length, pointArray[7] + sin((100/frame_comma_side)*(float)(-2.7*frameCount)*PI/180) * side_length);
            ofDrawLine(pointArray[6], pointArray[7], pointArray[0], pointArray[1]);
            break;
        case 4:
            ofDrawLine(pointArray[4], pointArray[5], pointArray[4] + cos((100/frame_comma_side)*(float)(-2.7*frameCount+(180/(100/frame_comma_side)))*PI/180) * side_length, pointArray[5] + sin((100/frame_comma_side)*(float)(-2.7*frameCount+(180/(100/frame_comma_side)))*PI/180) * side_length);
            ofDrawLine(pointArray[4], pointArray[5], pointArray[6], pointArray[7]);
            ofDrawLine(pointArray[6], pointArray[7], pointArray[0], pointArray[1]);
            break;
        case 5:
            ofDrawLine(pointArray[2], pointArray[3], pointArray[2] + cos((100/frame_comma_side)*(float)(-2.7*frameCount)*PI/180) * side_length, pointArray[3] + sin((100/frame_comma_side)*(float)(-2.7*frameCount)*PI/180) * side_length);
            ofDrawLine(pointArray[2], pointArray[3], pointArray[4], pointArray[5]);
            ofDrawLine(pointArray[4], pointArray[5], pointArray[6], pointArray[7]);
            ofDrawLine(pointArray[6], pointArray[7], pointArray[0], pointArray[1]);
            break;
    }
}

//--------------------------------------------------------------
void figure::triangle(float center_coordinate_x,float center_coordinate_y,float radius,int frame_comma_side,int frameCount) {
    float * pointArray = new float[6];
    for (int i = 0;i < 3;i++) {
        pointArray[i*2] = center_coordinate_x - cos(((float)2*i/3+0.5)*PI) * radius;
        pointArray[i*2+1] = center_coordinate_y - sin(((float)2*i/3+0.5)*PI) * radius;
    }
    
    float side_length = ((pointArray[0]-pointArray[2])*(pointArray[0]-pointArray[2]))+((pointArray[1]-pointArray[3])*(pointArray[1]-pointArray[3]));
    side_length = sqrt(side_length);
    
    while (frameCount >= (frame_comma_side*4)) {
        frameCount -= (frame_comma_side*4);
    }
    
    switch ((frameCount/frame_comma_side)%4) {
        case 0:
            ofDrawLine(pointArray[2], pointArray[3], pointArray[2] + cos((100/frame_comma_side)*(float)(3*frameCount+(240/(100/frame_comma_side)))*PI/180) * side_length, pointArray[3] + sin((100/frame_comma_side)*(float)(3*frameCount+(240/(100/frame_comma_side)))*PI/180) * side_length);
            ofDrawLine(pointArray[2], pointArray[3], pointArray[4], pointArray[5]);
            ofDrawLine(pointArray[4], pointArray[5], pointArray[0], pointArray[1]);
            break;
        case 1:
            ofDrawLine(pointArray[4], pointArray[5], pointArray[4] + cos((100/frame_comma_side)*(float)(3*frameCount+(60/(100/frame_comma_side)))*PI/180) * side_length, pointArray[5] + sin((100/frame_comma_side)*(float)(3*frameCount+(60/(100/frame_comma_side)))*PI/180) * side_length);
            ofDrawLine(pointArray[4], pointArray[5], pointArray[0], pointArray[1]);
            break;
        case 2:
            ofDrawLine(pointArray[4], pointArray[5], pointArray[4] + cos((100/frame_comma_side)*(float)(-3*frameCount+(180/(100/frame_comma_side)))*PI/180) * side_length, pointArray[5] + sin((100/frame_comma_side)*(float)(-3*frameCount+(180/(100/frame_comma_side)))*PI/180) * side_length);
            ofDrawLine(pointArray[4], pointArray[5], pointArray[0], pointArray[1]);
            break;
        case 3:
            ofDrawLine(pointArray[2], pointArray[3], pointArray[2] + cos((100/frame_comma_side)*(float)(-3*frameCount)*PI/180) * side_length, pointArray[3] + sin((100/frame_comma_side)*(float)(-3*frameCount)*PI/180) * side_length);
            ofDrawLine(pointArray[2], pointArray[3], pointArray[4], pointArray[5]);
            ofDrawLine(pointArray[4], pointArray[5], pointArray[0], pointArray[1]);
            break;
    }
}

//--------------------------------------------------------------
void figure::draw (int frame_comma_side,int frameCount) {
    
    if ((frameCount/frame_comma_side)% 240 < 48) {
        triangle(0, 0, 50,frame_comma_side,frameCount);
    } else if ((frameCount/frame_comma_side)% 240 < 72) {
        quadrangle(-ofGetWidth()/8, 0, 50,frame_comma_side,frameCount);
        triangle(0, 0, 50,frame_comma_side,frameCount);
        quadrangle(ofGetWidth()/8, 0, 50,frame_comma_side,frameCount);
    } else if ((frameCount/frame_comma_side)% 240 < 96) {
        pentagon(-ofGetWidth()/4, 0, 50,frame_comma_side,frameCount);
        quadrangle(-ofGetWidth()/8, 0, 50,frame_comma_side,frameCount);
        triangle(0, 0, 50,frame_comma_side,frameCount);
        quadrangle(ofGetWidth()/8, 0, 50,frame_comma_side,frameCount);
        pentagon(ofGetWidth()/4, 0, 50,frame_comma_side,frameCount);
    } else if ((frameCount/frame_comma_side)% 240 < 120){
        hexagon(-ofGetWidth()*3/8, 0, 50,frame_comma_side,frameCount);
        pentagon(-ofGetWidth()/4, 0, 50,frame_comma_side,frameCount);
        quadrangle(-ofGetWidth()/8, 0, 50,frame_comma_side,frameCount);
        triangle(0, 0, 50,frame_comma_side,frameCount);
        quadrangle(ofGetWidth()/8, 0, 50,frame_comma_side,frameCount);
        pentagon(ofGetWidth()/4, 0, 50,frame_comma_side,frameCount);
        hexagon(ofGetWidth()*3/8, 0, 50,frame_comma_side,frameCount);
    } else if ((frameCount/frame_comma_side)% 240 < 144) {
        hexagon(-ofGetWidth()*3/8, 0, 50,frame_comma_side,(120*frame_comma_side));
        pentagon(-ofGetWidth()/4, 0, 50,frame_comma_side,(120*frame_comma_side));
        quadrangle(-ofGetWidth()/8, 0, 50,frame_comma_side,(120*frame_comma_side));
        triangle(0, 0, 50,frame_comma_side,(120*frame_comma_side));
        quadrangle(ofGetWidth()/8, 0, 50,frame_comma_side,(120*frame_comma_side));
        pentagon(ofGetWidth()/4, 0, 50,frame_comma_side,(120*frame_comma_side));
        hexagon(ofGetWidth()*3/8, 0, 50,frame_comma_side,(120*frame_comma_side));
    } else if ((frameCount/frame_comma_side)% 240 < 168){
        pentagon(-ofGetWidth()/4, 0, 50,frame_comma_side,frameCount);
        quadrangle(-ofGetWidth()/8, 0, 50,frame_comma_side,frameCount);
        triangle(0, 0, 50,frame_comma_side,frameCount);
        quadrangle(ofGetWidth()/8, 0, 50,frame_comma_side,frameCount);
        pentagon(ofGetWidth()/4, 0, 50,frame_comma_side,frameCount);
    } else if ((frameCount/frame_comma_side)% 240 < 192) {
        quadrangle(-ofGetWidth()/8, 0, 50,frame_comma_side,frameCount);
        triangle(0, 0, 50,frame_comma_side,frameCount);
        quadrangle(ofGetWidth()/8, 0, 50,frame_comma_side,frameCount);
    } else if ((frameCount/frame_comma_side)% 240 < 216) {
        triangle(0, 0, 50,frame_comma_side,frameCount);
    } else {
        triangle(0, 0, 50,frame_comma_side,(240*frame_comma_side));
    }
}