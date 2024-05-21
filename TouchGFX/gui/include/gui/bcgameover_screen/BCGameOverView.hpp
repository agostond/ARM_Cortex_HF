#ifndef BCGAMEOVERVIEW_HPP
#define BCGAMEOVERVIEW_HPP

#include <gui_generated/bcgameover_screen/BCGameOverViewBase.hpp>
#include <gui/bcgameover_screen/BCGameOverPresenter.hpp>

class BCGameOverView : public BCGameOverViewBase
{
private:
	virtual void Replay();

public:
    BCGameOverView();
    virtual ~BCGameOverView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // BCGAMEOVERVIEW_HPP
