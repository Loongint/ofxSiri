//
//  ofxSiri
//
//  Created by Loongint on 13/9/2016.
//
//

#include "ofxSiri.h"
#include <stdlib.h>

using namespace std;

ofxSiri::ofxSiri() {
    content = "";
    speaker = "Samantha";
    singer = "Bad News";
}
ofxSiri::~ofxSiri() {
    content = "";
    speaker = "Samantha";
    singer = "Bad News";
}

void ofxSiri::setSpeaker(string tmpSpeaker) {
    speaker = tmpSpeaker;
}

void ofxSiri::setSinger(string tmpSinger) {
    singer = tmpSinger;
}

void ofxSiri::setContent(string tmpContent) {
    content = tmpContent;
}

void ofxSiri::speak() {
    string cmd = "say " + content + " -v " + speaker;
    system(cmd.c_str());
}

void ofxSiri::sing() {
    string cmd = "say " + content + " -v " + singer;
    system(cmd.c_str());
}

