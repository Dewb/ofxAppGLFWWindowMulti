//
//  WindowManager.h
//
//  Created by Theodore Watson on 6/18/14.
//
//

#pragma once

#include "ofxAppGLFWWindowMulti.h"
#include "ofxXmlSettings.h"

class WindowManager{
    public:
    
        WindowManager(); 
        void setup(ofxAppGLFWWindowMulti * ptr);
        void loadWindowSettings();
        void saveWindowSettings();
    
        void createWindow(string windowName = "", float x = 0, float y = 0, float w = 1024, float h = 768, bool bFullscreen = false);
        void closeWindow(int which);
        void closeActiveWindow();
        
        int getActiveWindowNo();
        int getNumWindows();
    
        ofxAppGLFWWindowMulti * getWindowPtr(); 
    
    protected:
        ofxAppGLFWWindowMulti * windowPtr;
        ofxXmlSettings windowPosXml;
        string machineString; 
};