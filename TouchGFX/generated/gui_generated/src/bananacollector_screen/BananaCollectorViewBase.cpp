/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/bananacollector_screen/BananaCollectorViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <images/BitmapDatabase.hpp>

BananaCollectorViewBase::BananaCollectorViewBase()
{
    __background.setPosition(0, 0, 320, 240);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    box1.setPosition(0, 0, 320, 139);
    box1.setColor(touchgfx::Color::getColorFromRGB(0, 166, 255));
    add(box1);

    textArea1.setPosition(0, 0, 38, 27);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(225, 255, 0));
    textArea1.setLinespacing(0);
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_XNDB).getText());
    textArea1.setWildcard(textArea1Buffer);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_ZXX6));
    add(textArea1);

    box2.setPosition(0, 139, 320, 101);
    box2.setColor(touchgfx::Color::getColorFromRGB(73, 189, 38));
    add(box2);

    image1_2.setXY(280, -15);
    image1_2.setBitmap(touchgfx::Bitmap(BITMAP_BANAN30X30_ID));
    add(image1_2);

    image1_1.setXY(130, -17);
    image1_1.setBitmap(touchgfx::Bitmap(BITMAP_BANAN30X30_ID));
    add(image1_1);

    image1.setXY(38, -15);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_BANAN30X30_ID));
    add(image1);

    image2.setXY(135, 190);
    image2.setBitmap(touchgfx::Bitmap(BITMAP_MONKEY50X50_ID));
    add(image2);
}

BananaCollectorViewBase::~BananaCollectorViewBase()
{

}

void BananaCollectorViewBase::setupScreen()
{

}

void BananaCollectorViewBase::handleTickEvent()
{
    //TickIncrement
    //When every N tick call virtual function
    //Call TickIncrement
    TickIncrement();
}

void BananaCollectorViewBase::handleKeyEvent(uint8_t key)
{
    if(0 == key)
    {
        //Interaction1
        //When hardware button 0 clicked change screen to BCGameOver
        //Go to BCGameOver with no screen transition
        application().gotoBCGameOverScreenNoTransition();
    
    }
}
