#include "ofApp.h"

void ofApp::setup(){
    siri.setSpeaker("Samantha");
    siri.setSinger("Bad News");
    siri.setContent("I am so handsome.");
}

void ofApp::update(){

}

void ofApp::draw(){

}

void ofApp::keyPressed(int key){
    if (key == '1') {
        siri.speak();
    }
    if (key == '2') {
        siri.sing();
    }
}
