#include "Cell.h"

//-------------------------------------------------------
Cell::Cell()
{

}

//-------------------------------------------------------
void Cell::setup(float _x, float _y, float _w)
{
    x = _x;
    y = _y;
    w = _w;

    state = int(ofRandom(2));
    previous = state;
}

//--------------------------------------------------------------
void Cell::savePrevious(){
    previous = state;
}

//--------------------------------------------------------------
void Cell::newState(int s) {
    state = s;
}

//--------------------------------------------------------------
void Cell::display() {
    ofFill();
    ofColor a = ofColor(60,255,255);
    ofColor b = ofColor(255,0,98);
    ofColor inbetween = a.getLerped(b, ofRandom(1));
    if (state == 1) ofSetColor(inbetween);
    else if (state == 0)ofSetColor(98,0,255, 200);
    else if (state == 2)ofSetColor(98,0,255, 150);
    
    //ofRect(x, y, w, w);
    ofPushMatrix();
    ofDrawBox(x, y, w, w, w, w);
    ofRotate(0.1);
    ofTranslate(10, 0);
    ofPopMatrix();
    ofNoFill();
    ofSetColor(0);
    //ofRect(x, y, w, w);
}
