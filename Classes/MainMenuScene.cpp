//
// Created by anvar on 1/9/19.
//

#include "MainMenuScene.h"

USING_NS_CC;

Scene *MainMenuScene::createScene() {
    return MainMenuScene::create();
}

bool MainMenuScene::init() {
    if (!Scene::init()) {
        return false;
    }

    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    return true;
}
