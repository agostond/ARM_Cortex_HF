#include <gui/screen1_screen/Screen1View.hpp>
#include <touchgfx/utils.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include "main.h"
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>


Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}


void Screen1View::FlyBird()
{
	positionX++;
	if (positionX > 295)
	{
		positionX = -25;
	}

	if(prevBtnPressed < btnPressed)
	{
		prevBtnPressed = btnPressed;
		positionY -= 25;
		timer = 10;
	}
	else if(timer ==0)
	{
		positionY += 2;
	}
	else if(timer < 5)
	{
		positionY++;
		timer--;
	}
	else
	{
		timer--;
	}

	if (positionY > 200)
	{
		positionY = 200;
	}

	if(positionY < 0)
	{
		positionY = 0;
	}

	image1.setXY(positionX, positionY);
	image1.invalidate();
}

bool Screen1View::CheckCollision()
{
	if (positionX + 45 > culoumn1Begin && positionX + 20 < culoumn1End)
	{
		if (positionY + 15 <  culoumn1Top || positionY + 37 > culoumn1Bot)
		{
			return true;
		}
	}

	if (positionX + 45 > culoumn2Begin && positionX + 20 < culoumn2End)
	{
		if (positionY + 15 <  culoumn2Top || positionY + 37 > culoumn2Bot)
		{
			return true;
		}
	}

	if (positionX + 40 > culoumn3Begin && positionX + 20 < culoumn3End)
	{
		if (positionY + 15 <  culoumn3Top || positionY + 37 > culoumn3Bot)
		{
			return true;
		}
	}

	return false;

}

void Screen1View::FinishGame()
{
	finished = true;
	image1.setVisible(false);
	box1.setVisible(false);
	box2.setVisible(false);
	box3.setVisible(false);
	box4.setVisible(false);
	box5.setVisible(false);
	box6.setVisible(false);
	box7.setVisible(false);
	__background.invalidate();
}


void Screen1View::TickGoes()
{
	if(finished == false)
	{
		FlyBird();
		if(CheckCollision())
		{
			FinishGame();
		}
		__background.invalidate();
	}
}
