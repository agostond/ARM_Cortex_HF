/*
#include <gui/screen1_screen/Screen1View.hpp>
#include <touchgfx/utils.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include "main.h"
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>

#include "flappyBirdObject.hpp"

void Screen1View::GenerateMap()
{

	culomn1.GenerateColumn(Culomn1);
	culomn2.GenerateColumn(Culomn2);
	culomn3.GenerateColumn(Culomn3);

}

void Screen1View::DrawMap()
{
	box2.setPosition(culomn1.GetBegin(), 0, 50, culomn1.GetTop());
	box3.setPosition(culomn1.GetBegin(), culomn1.GetBot(), 50, 240-culomn1.GetBot());

	box2.invalidate();
	box3.invalidate();

	box4.setPosition(culomn2.GetBegin(), 0, 50, culomn2.GetTop());
	box5.setPosition(culomn2.GetBegin(), culomn2.GetBot(), 50, 240-culomn2.GetBot());

	box4.invalidate();
	box5.invalidate();

	box6.setPosition(culomn3.GetBegin(), 0, 50, culomn3.GetTop());
	box7.setPosition(culomn3.GetBegin(), culomn3.GetBot(), 50, 240-culomn3.GetBot());

	box6.invalidate();
	box7.invalidate();
}

Screen1View::Screen1View()
{
	GenerateMap();
	DrawMap();
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
		GenerateMap();
		DrawMap();
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
	if (positionX + 47 > culomn1.GetBegin() && positionX + 20 < culomn1.GetEnd())
	{
		if (positionY + 15 <  culomn1.GetTop() || positionY + 37 > culomn1.GetBot())
		{
			return true;
		}
	}

	if (positionX + 47 > culomn2.GetBegin() && positionX + 20 < culomn2.GetEnd())
	{
		if (positionY + 15 <  culomn2.GetTop() || positionY + 37 > culomn2.GetBot())
		{
			return true;
		}
	}

	if (positionX + 47 > culomn3.GetBegin() && positionX + 20 < culomn3.GetEnd())
	{
		if (positionY + 15 <  culomn3.GetTop() || positionY + 37 > culomn3.GetBot())
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

*/
