#include <gui/fbgameover_screen/FBGameOverView.hpp>
#include "main.h"

FBGameOverView::FBGameOverView()
{

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
