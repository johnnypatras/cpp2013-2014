#include "stdafx.h"
#include "vehicle.h"
#include "analyzer.h"

#include <windows.h>
#include <iostream>  
#include <iomanip>

using namespace std;


//vehicle::vehicle(int s, bool st, float re):speed(s), state(st), resistance(re)
//{
//}

vehicle::vehicle(void){}

vehicle::~vehicle(void)
{
}


//set methods
void vehicle::setspeed(int s)
{speed = s;}

void vehicle::setstate(bool st)
{state = st;}

void vehicle::setresistance(float re)
{resistance = re;}

void vehicle::setmovement(bool init)
{
	if(init = true)
		movement = 0;
	else
		movement++;
}

  void vehicle::setXY(int Xin,int Yin){ 
     X=Xin;
     Y=Yin;     
  }

  void vehicle::setnotrepaired(void)
  {
	if(notrepaired>15)
		vehicle::~vehicle();

	  notrepaired++;}

//get methods
int vehicle::getspeed()
{return speed;}

bool vehicle::getstate()
{return state;}

float vehicle::getresistance()
{return resistance;}

int vehicle::getmovement()
{return movement;}