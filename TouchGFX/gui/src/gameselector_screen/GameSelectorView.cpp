#include <gui/gameselector_screen/GameSelectorView.hpp>
#include "main.h"

GameSelectorView::GameSelectorView()
{

}

void GameSelectorView::setupScreen()
{
    GameSelectorViewBase::setupScreen();
}

void GameSelectorView::tearDownScreen()
{
    GameSelectorViewBase::tearDownScreen();
}

void GameSelectorView::FlappyBirdStart()
{
	seed = HAL_GetTick();

}

void GameSelectorView::BananaStart()
{
	seed = HAL_GetTick();

}
