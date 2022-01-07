/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/ScrollList_myContainerBase.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

ScrollList_myContainerBase::ScrollList_myContainerBase()
{
    setWidth(200);
    setHeight(48);
    scalableImage1.setBitmap(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_LARGE_ID));
    scalableImage1.setPosition(-80, -7, 360, 60);
    scalableImage1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    scalableImage2.setBitmap(touchgfx::Bitmap(BITMAP_BLUE_ICONS_ADD_NEW_32_ID));
    scalableImage2.setPosition(11, 11, 29, 29);
    scalableImage2.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    textArea1.setPosition(50, 13, 141, 27);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_FZ10));

    add(scalableImage1);
    add(scalableImage2);
    add(textArea1);
}

void ScrollList_myContainerBase::initialize()
{

}
