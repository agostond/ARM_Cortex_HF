#include <gui/fbgameover_screen/FBGameOverView.hpp>
#include "main.h"

FBGameOverView::FBGameOverView()
{
	Unicode::snprintf(ScoreBuffer, SCORE_SIZE, "%u", scoreFlappy);
	Unicode::snprintf(HighScoreBuffer, HIGHSCORE_SIZE, "%u", highScoreFlappy);

	if (newFlappyHighScore)
	{
		NewHighScoreText.setVisible(true);
		newFlappyHighScore = false;
	}
	else
	{
		NewHighScoreText.setVisible(false);
	}

}

void FBGameOverView::setupScreen()
{
    FBGameOverViewBase::setupScreen();
}

void FBGameOverView::tearDownScreen()
{
    FBGameOverViewBase::tearDownScreen();
}


void FBGameOverView::Replay()
{
	seed = HAL_GetTick();
}
