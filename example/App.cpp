
#include "App.h"

//--------------------------------------------------------------
void testApp::setup(){	
	mt.setStageCycleTime(1);
	
	mt.addStage(" ");
	mt.addStage("_");
}


//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
	ofBackground(0,0,0);
	ofSetColor(255,255,255);
	
	ofDrawBitmapString(mt.whatToRender(), 10, 10);
}

void testApp::exit() {
	printf("exit()\n");
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
	
}

// mouse functions are there for backwards compatibility
// they are simply the first finger to touch the screen
// you can omit the mouse functions and just use touch functions
// or omit touch functions and just use mouse functions if you don't need multitouch
//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}
