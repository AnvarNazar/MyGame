//
// Created by anvar on 1/9/19.
//

#include "GameOverScene.h"

USING_NS_CC;

Scene *GameOverScene::createScene() {
    return GameOverScene::create();
}

bool GameOverScene::init() {
    if (!Scene::init()) {
        return false;
    }

    auto visibleSize= Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    return true;
}
