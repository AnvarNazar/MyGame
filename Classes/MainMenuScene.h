//
// Created by anvar on 1/9/19.
//

#ifndef MYGAME_MAINMENUSCENE_H
#define MYGAME_MAINMENUSCENE_H

#include "cocos2d.h"

class MainMenuScene: public cocos2d::Scene {
public:
    static cocos2d::Scene* createScene();

    virtual bool init();

    CREATE_FUNC(MainMenuScene);
};



#endif //MYGAME_MAINMENUSCENE_H
