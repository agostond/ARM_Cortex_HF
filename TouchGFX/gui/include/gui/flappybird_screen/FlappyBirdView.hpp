#ifndef FLAPPYBIRDVIEW_HPP
#define FLAPPYBIRDVIEW_HPP

#include <gui_generated/flappybird_screen/FlappyBirdViewBase.hpp>
#include <gui/flappybird_screen/FlappyBirdPresenter.hpp>
#include "flappyBirdObject.hpp"

class FlappyBirdView : public FlappyBirdViewBase
{

private:

	bool finished = false;

	int16_t positionX = 0;
	int16_t positionY = 95;
	uint32_t prevBtnPressed = 0;
	uint8_t timer = 0;
	uint8_t deathTimer = 0;
	bool firstPress = true;

	uint8_t checkPoint = 0;

	FlappyObject culomn1;
	FlappyObject culomn2;
	FlappyObject culomn3;

	virtual void FlyBird();
	virtual bool CheckCollision();
	virtual void FinishGame();
	virtual void GenerateMap();
	virtual void DrawMap();
	virtual void CalcPoint();

public:
    FlappyBirdView();
    virtual ~FlappyBirdView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void TickGoes();
protected:
};

#endif // SCREEN1VIEW_HPP
