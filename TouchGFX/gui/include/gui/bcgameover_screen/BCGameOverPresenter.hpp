#ifndef BCGAMEOVERPRESENTER_HPP
#define BCGAMEOVERPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class BCGameOverView;

class BCGameOverPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    BCGameOverPresenter(BCGameOverView& v);

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

    virtual ~BCGameOverPresenter() {}

private:
    BCGameOverPresenter();

    BCGameOverView& view;
};

#endif // BCGAMEOVERPRESENTER_HPP
