#ifndef FBGAMEOVERPRESENTER_HPP
#define FBGAMEOVERPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class FBGameOverView;

class FBGameOverPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    FBGameOverPresenter(FBGameOverView& v);

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

    virtual ~FBGameOverPresenter() {}

private:
    FBGameOverPresenter();

    FBGameOverView& view;
};

#endif // FBGAMEOVERPRESENTER_HPP
