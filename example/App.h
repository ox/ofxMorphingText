#pragma once

#include "ofMain.h"

#include "ofxMorphingText.h"

class testApp : public ofSimpleApp {
	
public:
	
	ofxMorphingText mt;
	
	void setup();
	void update();
	void draw();
	void exit();
	
	void keyPressed(int key) {}
	void keyReleased(int key)  {}
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased();
	void mouseReleased(int x, int y, int button );
	
};

