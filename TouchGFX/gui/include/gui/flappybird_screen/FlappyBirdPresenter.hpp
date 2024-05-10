#ifndef FLAPPYBIRDPRESENTER_HPP
#define FLAPPYBIRDPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class FlappyBirdView;

class FlappyBirdPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    FlappyBirdPresenter(FlappyBirdView& v);

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

    virtual ~FlappyBirdPresenter() {}

private:
    FlappyBirdPresenter();

    FlappyBirdView& view;
};

#endif // FLAPPYBIRDPRESENTER_HPP
