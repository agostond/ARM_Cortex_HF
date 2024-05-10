#ifndef FLAPPYOBJECT_HPP
#define FLAPPYOBJECT_HPP

#include "main.h"
#include <gui_generated/flappybird_screen/FlappyBirdViewBase.hpp>
#include <gui/flappybird_screen/FlappyBirdPresenter.hpp>

enum culomnNumber {
	Culomn1, Culomn2, Culomn3
};

class FlappyObject : public FlappyBirdViewBase

{

private:
	const int16_t culoumn1BeginDef = 79;
	const int16_t culoumn1EndDef = 129;

	const int16_t culoumn2BeginDef = 193;
	const int16_t culoumn2EndDef = 243;

	const int16_t culoumn3BeginDef = 295;
	const int16_t culoumn3EndDef = 345;

	int16_t bot;
	int16_t top;
	int16_t begin;
	int16_t end;

	culomnNumber cn;

	bool valid = false;


public:
	FlappyObject();

	virtual void GenerateColumn(culomnNumber _cn);
	virtual void SetColumn(int16_t _begin, int16_t _end, int16_t _bot, int16_t _top, culomnNumber _cn);

	virtual ~FlappyObject(){}

	virtual int16_t GetTop();
	virtual int16_t GetBot();
	virtual int16_t GetBegin();
	virtual int16_t GetEnd();



};

#endif // FLAPPYOBJECT_HPP
