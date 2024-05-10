#include <touchgfx/utils.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include "main.h"
#include <gui/flappybird_screen/FlappyBirdView.hpp>
#include <gui_generated/flappybird_screen/FlappyBirdViewBase.hpp>
#include <gui/flappybird_screen/FlappyBirdPresenter.hpp>


#include "flappyBirdObject.hpp"
#include "main.h"

FlappyObject::FlappyObject()
{
	valid = false;
}

void FlappyObject::GenerateColumn(culomnNumber _cn)
{
	if (_cn != Culomn1 && _cn != Culomn2 && _cn != Culomn3)
	{
		valid = false;
		return;
	}

	cn = _cn;

	int16_t offset = -5 + get_random_number() % 10;

	switch (cn)
	{

		case Culomn1:
			begin = culoumn1BeginDef + offset;
			end = culoumn1EndDef - offset;
			break;
		case Culomn2:
			begin = culoumn2BeginDef + offset;
			end = culoumn2EndDef - offset;
			break;
		case Culomn3:
			begin = culoumn3BeginDef + offset;
			end = culoumn3EndDef - offset;
			break;
	}
	//top between 0 and 160
	top = get_random_number() % 159;
	//bot between top + 80 and 240
	bot = top + 80 + get_random_number() % (240 - (top + 80));

	int16_t diff = top - bot;
	if (diff < 0)
	{
		diff = -diff;
	}
	while (diff > 90) {
		if (get_random_number() % 2 == 0)
		{
			top++;
		}
		else
		{
			bot--;
		}

		diff = top - bot;

		if (diff < 0)
		{
			diff = -diff;
		}
	}

	valid = true;

}

void FlappyObject::SetColumn(int16_t _begin, int16_t _end, int16_t _bot, int16_t _top, culomnNumber _cn)
{
	if (_cn != Culomn1 && _cn != Culomn2 && _cn != Culomn3)
	{
		valid = false;
		return;
	}

	begin = _begin;
	end = _end;
	bot = _bot;
    top = _top;
    cn = _cn;

    valid = true;

}



 int16_t FlappyObject::GetTop()
 {
	 return top;
 }

 int16_t FlappyObject::GetBot()
 {
	 return bot;
 }


 int16_t FlappyObject::GetBegin()
 {
	 return begin;
 }

 int16_t FlappyObject::GetEnd()
 {
	 return end;
 }
