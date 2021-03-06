#ifndef __GAME_SCENE_H__
#define __GAME_SCENE_H__

#include "cocos2d.h"
#include "CCVector.h"

class GameScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    virtual bool init();
    cocos2d::Sprite* planet;
    cocos2d::Sprite* spaceShip;
    cocos2d::DrawNode* laser;
    cocos2d::DrawNode* Comet;
//    cocos2d::Size visibleSize;
//    cocos2d::Vec2 origin;
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(GameScene);
    void onKeyPressed(cocos2d::EventKeyboard::KeyCode keyCode, cocos2d::Event* event);
    void onKeyReleased(cocos2d::EventKeyboard::KeyCode keyCode, cocos2d::Event* event);
    void update(float dt);
    void drawComets();
};

#endif // __HELLOWORLD_SCENE_H__
