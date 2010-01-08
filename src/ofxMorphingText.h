/*
 *  MorphingText.h
 *  CFText
 *
 *  Created by Artem Titoulenko on 1/6/10.
 *  Copyright 2010 Artem Titoulenko. All rights reserved.
 *
 */

class ofxMorphingText {
private:
	vector<string> stages;
	float stageCylceTime;
	float timeBegan;
	bool  timeSet;
	int	  stageSize;
	bool  once;
	
	
public:
	
	void init() { stageCylceTime = 0.0f; timeBegan = 0.0f; timeSet = once = false; stageSize = 0; }
	
	ofxMorphingText() { init(); }
	~ofxMorphingText() { stages.clear(); }
	
	void addStage(string stage) {
		stages.push_back(stage);
		stageSize ++;
	}
	
	void setStageCycleTime(float _time) {
		stageCylceTime = _time; 
	}
	
	string whatToRender() {
		if(!timeSet) {
			timeBegan = ofGetElapsedTimef();
			timeSet = true;
		} 
		
		int n = (int)((ofGetElapsedTimef() / (timeSet+stageCylceTime)) * stageSize) % stageSize;
		
		if( ofGetElapsedTimef() > timeSet+stageCylceTime && once)
			return stages[stageSize];
		else
			return stages[n];
		
	}
	
	void resetTime() {
		timeSet = false;
	}
	
	//it kinda works? 
	void cycleOnce(bool iShouldCycleOnce) {
		once = iShouldCycleOnce;
	}
	
	void setTextToRender(string _text, int index) {
		stages[index] = _text;
	}
};