#pragma once

#include "ofMain.h"
#include "ofxSiri.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
    
    ofxSiri siri;
};
