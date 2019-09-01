//
// Created by anvar on 1/9/19.
//

#ifndef MYGAME_GAMESCENE_H
#define MYGAME_GAMESCENE_H

#include "cocos2d.h"


class GameScene : public cocos2d::Scene {
public:
    static cocos2d::Scene* createScene();

    virtual bool init();

    CREATE_FUNC(GameScene);

};



#endif //MYGAME_GAMESCENE_H
