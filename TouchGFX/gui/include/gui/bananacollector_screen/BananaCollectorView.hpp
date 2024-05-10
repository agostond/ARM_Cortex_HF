#ifndef BANANACOLLECTORVIEW_HPP
#define BANANACOLLECTORVIEW_HPP

#include <gui_generated/bananacollector_screen/BananaCollectorViewBase.hpp>
#include <gui/bananacollector_screen/BananaCollectorPresenter.hpp>

class BananaCollectorView : public BananaCollectorViewBase
{
public:
    BananaCollectorView();
    virtual ~BananaCollectorView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // BANANACOLLECTORVIEW_HPP
