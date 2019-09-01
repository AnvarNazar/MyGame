//
// Created by anvar on 1/9/19.
//

#ifndef MYGAME_GAMEOVERSCENE_H
#define MYGAME_GAMEOVERSCENE_H

#include "cocos2d.h"

class GameOverScene: public cocos2d::Scene {
public:
    static cocos2d::Scene* createScene();

    virtual bool init();

    CREATE_FUNC(GameOverScene);
};



#endif //MYGAME_GAMEOVERSCENE_H
