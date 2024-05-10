#ifndef GAMESELECTORPRESENTER_HPP
#define GAMESELECTORPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class GameSelectorView;

class GameSelectorPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    GameSelectorPresenter(GameSelectorView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~GameSelectorPresenter() {}

private:
    GameSelectorPresenter();

    GameSelectorView& view;
};

#endif // GAMESELECTORPRESENTER_HPP
