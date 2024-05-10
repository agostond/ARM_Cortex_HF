#ifndef FBGAMEOVERVIEW_HPP
#define FBGAMEOVERVIEW_HPP

#include <gui_generated/fbgameover_screen/FBGameOverViewBase.hpp>
#include <gui/fbgameover_screen/FBGameOverPresenter.hpp>

class FBGameOverView : public FBGameOverViewBase
{


private:

	virtual void Replay();

public:

    FBGameOverView();
    virtual ~FBGameOverView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // FBGAMEOVERVIEW_HPP
