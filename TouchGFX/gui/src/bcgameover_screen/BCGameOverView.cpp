#include <gui/bcgameover_screen/BCGameOverView.hpp>
#include "main.h"

BCGameOverView::BCGameOverView()
{
	Unicode::snprintf(ScoreBuffer, SCORE_SIZE, "%u", scoreBanana);
	Unicode::snprintf(HighScoreBuffer, HIGHSCORE_SIZE, "%u", highScoreBanana);

	if (newBananaHighScore)
	{
		NewHighScoreText.setVisible(true);
		newBananaHighScore = false;
	}
	else
	{
		NewHighScoreText.setVisible(false);
	}

}

void BCGameOverView::setupScreen()
{
    BCGameOverViewBase::setupScreen();
}

void BCGameOverView::tearDownScreen()
{
    BCGameOverViewBase::tearDownScreen();
}

void BCGameOverView::Replay()
{
	seed = HAL_GetTick();
}
