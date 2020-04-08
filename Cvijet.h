#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System/Clock.hpp>
using namespace sf;

class Cvijet
{
public:
	Cvijet(RenderWindow* window);
	void draw();
	void set_nebo();
	void set_sunce();
	void set_tlo();
	void set_stabljika();
	void set_cvjetovi1();
	void set_cvjetovi2();
	void set_cvjetovi3();
	void set_list();

private:
	RenderWindow* window;
	CircleShape nebo, sunce, tlo,
		list, list1, list2, list3, list4, list5;
	RectangleShape stabljika, 
		cvjetovi, cvjetovi1,
		grana, grana1,
		latica, latica1, latica2, latica3, latica4, latica5;
	Clock sat;
};

