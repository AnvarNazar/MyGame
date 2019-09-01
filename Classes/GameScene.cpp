//
// Created by anvar on 1/9/19.
//

#include "GameScene.h"

USING_NS_CC;

Scene *GameScene::createScene() {
    return GameScene::create();
}

bool GameScene::init() {
    if (!Scene::init()) {
        return false;
    }

    auto visibleSize=Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    return true;
}
