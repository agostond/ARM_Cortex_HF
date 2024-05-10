#ifndef GAMESELECTORVIEW_HPP
#define GAMESELECTORVIEW_HPP

#include <gui_generated/gameselector_screen/GameSelectorViewBase.hpp>
#include <gui/gameselector_screen/GameSelectorPresenter.hpp>

class GameSelectorView : public GameSelectorViewBase
{
private:
	virtual void FlappyBirdStart();

public:
    GameSelectorView();
    virtual ~GameSelectorView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // GAMESELECTORVIEW_HPP
