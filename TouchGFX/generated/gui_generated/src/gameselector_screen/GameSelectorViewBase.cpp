/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/gameselector_screen/GameSelectorViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

GameSelectorViewBase::GameSelectorViewBase() :
    buttonCallback(this, &GameSelectorViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 320, 240);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_GAMECONSOLEBACKGROUND_RESIZE_ID));
    add(image1);

    buttonWithLabel1.setXY(73, 27);
    buttonWithLabel1.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_SMALL_ROUND_ACTION_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_SMALL_ROUND_PRESSED_ID));
    buttonWithLabel1.setLabelText(touchgfx::TypedText(T___SINGLEUSE_MIYY));
    buttonWithLabel1.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabel1.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabel1.setAction(buttonCallback);
    add(buttonWithLabel1);

    buttonWithLabel2.setXY(73, 108);
    buttonWithLabel2.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_SMALL_ROUND_ACTION_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_SMALL_ROUND_PRESSED_ID));
    buttonWithLabel2.setLabelText(touchgfx::TypedText(T___SINGLEUSE_BUNL));
    buttonWithLabel2.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabel2.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabel2.setAction(buttonCallback);
    add(buttonWithLabel2);

    buttonWithIcon1.setXY(0, 180);
    buttonWithIcon1.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUND_TINY_FILL_ACTION_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUND_TINY_FILL_PRESSED_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_HARDWARE_KEYBOARD_BACKSPACE_50_50_E8F6FB_SVG_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_ACTION_DONE_50_50_E8F6FB_SVG_ID));
    buttonWithIcon1.setIconXY(5, 5);
    buttonWithIcon1.setAction(buttonCallback);
    add(buttonWithIcon1);
}

GameSelectorViewBase::~GameSelectorViewBase()
{

}

void GameSelectorViewBase::setupScreen()
{

}

void GameSelectorViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonWithLabel1)
    {
        //Interaction1
        //When buttonWithLabel1 clicked change screen to FlappyBird
        //Go to FlappyBird with no screen transition
        application().gotoFlappyBirdScreenNoTransition();
        //FlappyBirdStart
        //When buttonWithLabel1 clicked call virtual function
        //Call FlappyBirdStart
        FlappyBirdStart();
    }
    if (&src == &buttonWithLabel2)
    {
        //Interaction2
        //When buttonWithLabel2 clicked change screen to BananaCollector
        //Go to BananaCollector with no screen transition
        application().gotoBananaCollectorScreenNoTransition();
    }
    if (&src == &buttonWithIcon1)
    {
        //Interaction3
        //When buttonWithIcon1 clicked change screen to Menu
        //Go to Menu with no screen transition
        application().gotoMenuScreenNoTransition();
    }
}