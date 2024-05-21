#ifndef BANANACOLLECTORVIEW_HPP
#define BANANACOLLECTORVIEW_HPP

#include <gui_generated/bananacollector_screen/BananaCollectorViewBase.hpp>
#include <gui/bananacollector_screen/BananaCollectorPresenter.hpp>
#include <gui_generated/bananacollector_screen/BananaCollectorViewBase.hpp>

struct banana {
  int32_t xPos;
  int32_t height;
  uint8_t startTime;
  bool valid;
};

class BananaCollectorView : public BananaCollectorViewBase
{
public:
    BananaCollectorView();
    virtual ~BananaCollectorView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void TickIncrement();

    virtual void MooveMonkey();
    virtual void FallBanana();
    virtual void GenerateBana();
    virtual void FinishGame();
    virtual void CheckCollision();

    uint16_t cntr = 0;
    int16_t velocity = 0;
    int32_t monkeyPos = 135;
    uint8_t refreshpic = 0;
    bool newRound = true;
    uint8_t bananaNumber;
    uint8_t liveBananaNumber;

    const static uint8_t MAXBANANA = 3;
    banana bananas[MAXBANANA];

protected:
};

#endif // BANANACOLLECTORVIEW_HPP
