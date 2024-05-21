#include <gui/bananacollector_screen/BananaCollectorView.hpp>
#include "main.h"
#include <gui_generated/bananacollector_screen/BananaCollectorViewBase.hpp>

BananaCollectorView::BananaCollectorView()
{
	scoreBanana = 0;
	newBananaHighScore = false;
}

void BananaCollectorView::setupScreen()
{
    BananaCollectorViewBase::setupScreen();
}

void BananaCollectorView::tearDownScreen()
{
    BananaCollectorViewBase::tearDownScreen();
}

void BananaCollectorView::MooveMonkey()
{
	velocity += (int64_t)gyroBuffer[2]/5000;


	if(velocity < 60 && velocity > -60 && cntr > 15)
	{
		velocity = 0;
		cntr = 0;
	}

	int32_t newPos = monkeyPos - velocity/30;
	if(newPos > 295)
	{
		newPos = 295;
		velocity = 0;
	}
	else if (newPos < -25)
	{
		newPos = -25;
		velocity = 0;
	}
	monkeyPos = newPos;

	image2.setXY(newPos, 190);

	cntr++;

}

void BananaCollectorView::FallBanana()
{
	for (int i = 0; i < bananaNumber; i++)
	{
		if (bananas[i].valid)
		{
			if (bananas[i].startTime > 0)
			{
				bananas[i].startTime--;
			}
			else
			{
				bananas[i].height += 2;
			}

			if (bananas[i].height > 225)
			{
				FinishGame();
			}
		}
	}

}

void BananaCollectorView::GenerateBana()
{
	bananaNumber = get_random_number() % MAXBANANA +1;
	liveBananaNumber = bananaNumber;

	for (int i = 0; i < MAXBANANA; i++)

	{
		if(i < bananaNumber)
		{
			bananas[i].valid = true;
			bananas[i].xPos = get_random_number() % 253 + 38;
			bananas[i].height = -16;
			bananas[i].startTime = get_random_number() % 100;
		}
		else
		{
			bananas[i].valid = false;
		}

	}

	bananas[0].startTime = 0;
}

void BananaCollectorView::CheckCollision()
{
	for (int i = 0; i < MAXBANANA; i++)
	{
		if (bananas[i].valid)
		{
			if (monkeyPos + 25 > bananas[i].xPos - 15 && monkeyPos - 25 < bananas[i].xPos + 15)
			{
				if(bananas[i].height > 165)
				{
					scoreBanana++;
					bananas[i].valid = false;
					liveBananaNumber--;
				}
			}
		}
	}

	if (liveBananaNumber == 0)
	{
		newRound = true;
	}
	Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%u", scoreBanana);
}

void BananaCollectorView::FinishGame()
{
	newRound = true;
	if (scoreBanana > highScoreBanana)
	{
		highScoreBanana = scoreBanana;
		newBananaHighScore = true;
	}
	application().gotoBCGameOverScreenNoTransition();
}

void BananaCollectorView::TickIncrement()
{
	MooveMonkey();
	if(newRound)
	{
		newRound = false;
		GenerateBana();
	}
	FallBanana();
	CheckCollision();
	refreshpic++;
	if(refreshpic > 2)
	{
		image2.invalidate();
	    textArea1.invalidate();
	    box2.invalidate();

		if (bananas[0].valid)
		{
			image1.setXY(bananas[0].xPos, bananas[0].height);
		}
		else
		{
			image1.setXY(500, 500);
		}
		if (bananas[1].valid)
		{
			image1_1.setXY(bananas[1].xPos, bananas[1].height);
		}
		else
		{
			image1_1.setXY(500, 500);
		}
		if (bananas[2].valid)
		{
			image1_2.setXY(bananas[2].xPos, bananas[2].height);
		}
		else
		{
			image1_2.setXY(500, 500);
		}

		image1.invalidate();
		image1_1.invalidate();
		image1_2.invalidate();
		box1.invalidate();


		refreshpic = 0;
	}

}
