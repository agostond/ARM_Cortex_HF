#ifndef SCREEN1VIEW_HPP
#define SCREEN1VIEW_HPP

#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>

class Screen1View : public Screen1ViewBase
{

private:

	bool finished = false;

	int16_t positionX = 0;
	int16_t positionY = 95;
	uint32_t prevBtnPressed = 0;
	uint8_t timer = 0;

	uint16_t culoumn1Bot = 146;
	uint16_t culoumn1Top = 60;

	uint16_t culoumn2Bot = 180;
	uint16_t culoumn2Top = 107;

	uint16_t culoumn3Bot = 120;
	uint16_t culoumn3Top = 53;

	uint16_t culoumn1Begin = 79;
	uint16_t culoumn1End = 129;

	uint16_t culoumn2Begin = 193;
	uint16_t culoumn2End = 243;

	uint16_t culoumn3Begin = 295;
	uint16_t culoumn3End = 345;

	virtual void FlyBird();
	virtual bool CheckCollision();
	virtual void FinishGame();

public:
    Screen1View();
    virtual ~Screen1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void TickGoes();
protected:
};

#endif // SCREEN1VIEW_HPP
