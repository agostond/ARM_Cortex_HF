/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FRONTENDAPPLICATIONBASE_HPP
#define FRONTENDAPPLICATIONBASE_HPP

#include <mvp/MVPApplication.hpp>
#include <gui/model/Model.hpp>

class FrontendHeap;

class FrontendApplicationBase : public touchgfx::MVPApplication
{
public:
    FrontendApplicationBase(Model& m, FrontendHeap& heap);
    virtual ~FrontendApplicationBase() { }

    virtual void changeToStartScreen()
    {
        gotoMenuScreenNoTransition();
    }

    // Menu
    void gotoMenuScreenNoTransition();

    void gotoMenuScreenSlideTransitionWest();

    void gotoMenuScreenSlideTransitionEast();

    // GameSelector
    void gotoGameSelectorScreenWipeTransitionEast();

    // FlappyBird
    void gotoFlappyBirdScreenNoTransition();

    // FBGameOver
    void gotoFBGameOverScreenNoTransition();

    // BananaCollector
    void gotoBananaCollectorScreenNoTransition();

    // BCGameOver
    void gotoBCGameOverScreenNoTransition();

protected:
    touchgfx::Callback<FrontendApplicationBase> transitionCallback;
    FrontendHeap& frontendHeap;
    Model& model;

    // Menu
    void gotoMenuScreenNoTransitionImpl();

    void gotoMenuScreenSlideTransitionWestImpl();

    void gotoMenuScreenSlideTransitionEastImpl();

    // GameSelector
    void gotoGameSelectorScreenWipeTransitionEastImpl();

    // FlappyBird
    void gotoFlappyBirdScreenNoTransitionImpl();

    // FBGameOver
    void gotoFBGameOverScreenNoTransitionImpl();

    // BananaCollector
    void gotoBananaCollectorScreenNoTransitionImpl();

    // BCGameOver
    void gotoBCGameOverScreenNoTransitionImpl();
};

#endif // FRONTENDAPPLICATIONBASE_HPP
