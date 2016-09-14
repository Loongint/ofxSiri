//
//  ofxSiri
//
//  Created by Loongint on 13/9/2016.
//
//

#include "ofMain.h"

class ofxSiri{
protected:
    string content;
    string singer;
    string speaker;
public:
    ofxSiri();
    virtual ~ofxSiri();
    
    void sing();
    void speak();
    void setSpeaker(string tmpSpeaker);
    void setSinger(string tmpSinger);
    void setContent(string tmpContent);
};
