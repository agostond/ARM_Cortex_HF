#include <touchgfx/utils.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include "main.h"
#include <gui/flappybird_screen/FlappyBirdView.hpp>
#include <gui_generated/flappybird_screen/FlappyBirdViewBase.hpp>
#include <gui/flappybird_screen/FlappyBirdPresenter.hpp>
#include <texts/TextKeysAndLanguages.hpp>

#include "flappyBirdObject.hpp"

void FlappyBirdView::GenerateMap()
{

	culomn1.GenerateColumn(Culomn1);
	culomn2.GenerateColumn(Culomn2);
	culomn3.GenerateColumn(Culomn3);

}

void FlappyBirdView::DrawMap()
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

FlappyBirdView::FlappyBirdView()
{
	GenerateMap();
	DrawMap();
	btnPressed = 0;
	scoreFlappy = 0;
}

void FlappyBirdView::setupScreen()
{
	FlappyBirdViewBase::setupScreen();
}

void FlappyBirdView::tearDownScreen()
{
	FlappyBirdViewBase::tearDownScreen();
}


void FlappyBirdView::FlyBird()
{
	positionX++;
	if (positionX > 295)
	{
		GenerateMap();
		DrawMap();

		checkPoint = 0;

		scoreFlappy++;

		Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%u", scoreFlappy);
		textArea1.invalidate();

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

bool FlappyBirdView::CheckCollision()
{
	if (positionX + 40 > culomn1.GetBegin() && positionX + 20 < culomn1.GetEnd())
	{
		if (positionY + 15 <  culomn1.GetTop() || positionY + 37 > culomn1.GetBot())
		{
			return true;
		}
	}

	if (positionX + 40 > culomn2.GetBegin() && positionX + 20 < culomn2.GetEnd())
	{
		if (positionY + 15 <  culomn2.GetTop() || positionY + 37 > culomn2.GetBot())
		{
			return true;
		}
	}

	if (positionX + 40 > culomn3.GetBegin() && positionX + 20 < culomn3.GetEnd())
	{
		if (positionY + 15 <  culomn3.GetTop() || positionY + 37 > culomn3.GetBot())
		{
			return true;
		}
	}

	return false;

}

void FlappyBirdView::FinishGame()
{
	finished = true;
	application().gotoFBGameOverScreenNoTransition();
}

void FlappyBirdView::CalcPoint()
{
	if (positionX > culomn1.GetEnd() && checkPoint == 0)
	{
		checkPoint = 1;
		scoreFlappy++;

		Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%u", scoreFlappy);
		textArea1.invalidate();

	}
	else if (positionX > culomn2.GetEnd() && checkPoint == 1)
	{
		checkPoint = 2;
		scoreFlappy++;

		Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%u", scoreFlappy);
		textArea1.invalidate();
	}

	if (scoreFlappy > highScoreFlappy)
	{
		highScoreFlappy = scoreFlappy;
		newFlappyHighScore = true;
	}
}


void FlappyBirdView::TickGoes()
{
	if (finished == false && btnPressed != 0)
	{
		if(firstPress)
		{
			firstPress = false;
			btnPressed = 1;
			prevBtnPressed = 1;
		}
		FlyBird();

		if(CheckCollision())
		{
			deathTimer++;
		}

		CalcPoint();

		if(deathTimer != 0)
		{
			deathTimer++;
			if (deathTimer > 10)
			{
				FinishGame();
			}
		}

		__background.invalidate();
	}
}
