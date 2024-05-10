#ifndef BANANACOLLECTORPRESENTER_HPP
#define BANANACOLLECTORPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class BananaCollectorView;

class BananaCollectorPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    BananaCollectorPresenter(BananaCollectorView& v);

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

    virtual ~BananaCollectorPresenter() {}

private:
    BananaCollectorPresenter();

    BananaCollectorView& view;
};

#endif // BANANACOLLECTORPRESENTER_HPP
