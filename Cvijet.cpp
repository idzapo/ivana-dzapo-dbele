#include "Cvijet.h"

Cvijet::Cvijet(RenderWindow* window)
{
	this->window = window;
}

void Cvijet::set_nebo()
{
	int b = 0;
	float d = 580.0f;
	int e = -180;
	int f = -180;

	for (int i = 0; i < 25; ++i)
	{
		nebo.setFillColor(Color(0, b, 255));
		nebo.setRadius(d);
		nebo.setPosition(Vector2f(e, f));
		window->draw(nebo);
		b = b + 10;
		d = d - 20;
		e = e + 20;
		f = f + 20;
	}
}

void Cvijet::set_sunce()
{
	sunce.setFillColor(Color(255, 215, 0));
	sunce.setRadius(70.0f);
	sunce.setOutlineThickness(20.f);
	sunce.setOutlineColor(Color(255, 255, 0));
	sunce.setPosition(Vector2f(330, 330));
	window->draw(sunce);
}

void Cvijet::set_tlo()
{
	tlo.setFillColor(Color(34, 139, 34));
	tlo.setRadius(900.0f);
	tlo.setPosition(Vector2f(-495, 450));
	window->draw(tlo);
}

void Cvijet::set_stabljika()
{
	stabljika.setFillColor(Color(0, 255, 127));
	stabljika.setSize(Vector2f(8, 100));
	stabljika.setPosition(Vector2f(395, 450));
	window->draw(stabljika);

	grana.setFillColor(Color(0, 255, 127));
	grana.setSize(Vector2f(6, 35));
	grana.setPosition(Vector2f(403, 520));
	grana.setRotation(120.f);
	window->draw(grana);

	grana1.setFillColor(Color(0, 255, 127));
	grana1.setSize(Vector2f(6, 35));
	grana1.setPosition(Vector2f(425, 470));
	grana1.setRotation(60.f);
	window->draw(grana1);
}

void Cvijet::set_cvjetovi1()
{
	latica5.setFillColor(Color(178, 102, 255));
	latica5.setSize(Vector2f(13, 40));
	latica5.setPosition(Vector2f(387, 427));
	latica5.setRotation(220.f);
	window->draw(latica5);

	latica4.setFillColor(Color(153, 51, 255));
	latica4.setSize(Vector2f(13, 40));
	latica4.setPosition(Vector2f(422, 425));
	latica4.setRotation(130.f);
	window->draw(latica4);

	latica3.setFillColor(Color(127, 0, 255));
	latica3.setSize(Vector2f(13, 40));
	latica3.setPosition(Vector2f(397, 436));
	latica3.setRotation(220.f);
	window->draw(latica3);

	latica2.setFillColor(Color(102, 0, 204));
	latica2.setSize(Vector2f(13, 40));
	latica2.setPosition(Vector2f(414, 435));
	latica2.setRotation(130.f);
	window->draw(latica2);

	latica1.setFillColor(Color(76, 0, 153));
	latica1.setSize(Vector2f(13, 40));
	latica1.setPosition(Vector2f(406, 445));
	latica1.setRotation(220.f);
	window->draw(latica1);

	latica.setFillColor(Color(51, 0, 102));
	latica.setSize(Vector2f(13, 40));
	latica.setPosition(Vector2f(406, 445));
	latica.setRotation(130.f);
	window->draw(latica);
}

void Cvijet::set_cvjetovi2()
{
	latica5.setFillColor(Color(255, 102, 255));
	latica5.setSize(Vector2f(13, 40));
	latica5.setPosition(Vector2f(387, 427));
	latica5.setRotation(220.f);
	window->draw(latica5);

	latica4.setFillColor(Color(255, 51, 255));
	latica4.setSize(Vector2f(13, 40));
	latica4.setPosition(Vector2f(422, 425));
	latica4.setRotation(130.f);
	window->draw(latica4);

	latica3.setFillColor(Color(255, 0, 255));
	latica3.setSize(Vector2f(13, 40));
	latica3.setPosition(Vector2f(397, 436));
	latica3.setRotation(220.f);
	window->draw(latica3);

	latica2.setFillColor(Color(204, 0, 204));
	latica2.setSize(Vector2f(13, 40));
	latica2.setPosition(Vector2f(414, 435));
	latica2.setRotation(130.f);
	window->draw(latica2);

	latica1.setFillColor(Color(153, 0, 153));
	latica1.setSize(Vector2f(13, 40));
	latica1.setPosition(Vector2f(406, 445));
	latica1.setRotation(220.f);
	window->draw(latica1);

	latica.setFillColor(Color(102, 0, 102));
	latica.setSize(Vector2f(13, 40));
	latica.setPosition(Vector2f(406, 445));
	latica.setRotation(130.f);
	window->draw(latica);
}

void Cvijet::set_cvjetovi3()
{
	latica5.setFillColor(Color(255, 102, 178));
	latica5.setSize(Vector2f(13, 40));
	latica5.setPosition(Vector2f(387, 427));
	latica5.setRotation(220.f);
	window->draw(latica5);

	latica4.setFillColor(Color(255, 51, 153));
	latica4.setSize(Vector2f(13, 40));
	latica4.setPosition(Vector2f(422, 425));
	latica4.setRotation(130.f);
	window->draw(latica4);

	latica3.setFillColor(Color(255, 0, 127));
	latica3.setSize(Vector2f(13, 40));
	latica3.setPosition(Vector2f(397, 436));
	latica3.setRotation(220.f);
	window->draw(latica3);

	latica2.setFillColor(Color(204, 0, 102));
	latica2.setSize(Vector2f(13, 40));
	latica2.setPosition(Vector2f(414, 435));
	latica2.setRotation(130.f);
	window->draw(latica2);

	latica1.setFillColor(Color(153, 0, 76));
	latica1.setSize(Vector2f(13, 40));
	latica1.setPosition(Vector2f(406, 445));
	latica1.setRotation(220.f);
	window->draw(latica1);

	latica.setFillColor(Color(102, 0, 51));
	latica.setSize(Vector2f(13, 40));
	latica.setPosition(Vector2f(406, 445));
	latica.setRotation(130.f);
	window->draw(latica);
}

void Cvijet::set_list()
{
	list.setFillColor(Color(76, 153, 0));
	list.setRadius(8.0f);
	list.setOutlineThickness(4.f);
	list.setOutlineColor(Color(102, 204, 0));
	list.setPosition(Vector2f(363, 510));
	window->draw(list);

	list1.setFillColor(Color(76, 153, 0));
	list1.setRadius(8.0f);
	list1.setOutlineThickness(4.f);
	list1.setOutlineColor(Color(102, 204, 0));
	list1.setPosition(Vector2f(374, 490));
	window->draw(list1);

	list2.setFillColor(Color(76, 153, 0));
	list2.setRadius(8.0f);
	list2.setOutlineThickness(4.f);
	list2.setOutlineColor(Color(102, 204, 0));
	list2.setPosition(Vector2f(354, 493));
	window->draw(list2);

	list3.setFillColor(Color(76, 153, 0));
	list3.setRadius(8.0f);
	list3.setOutlineThickness(4.f);
	list3.setOutlineColor(Color(102, 204, 0));
	list3.setPosition(Vector2f(420, 480));
	window->draw(list3);

	list4.setFillColor(Color(76, 153, 0));
	list4.setRadius(8.0f);
	list4.setOutlineThickness(4.f);
	list4.setOutlineColor(Color(102, 204, 0));
	list4.setPosition(Vector2f(409, 459));
	window->draw(list4);

	list5.setFillColor(Color(76, 153, 0));
	list5.setRadius(8.0f);
	list5.setOutlineThickness(4.f);
	list5.setOutlineColor(Color(102, 204, 0));
	list5.setPosition(Vector2f(428, 461));
	window->draw(list5);
}

void Cvijet::draw()
{
	{
		set_nebo();
		set_sunce();
		set_tlo();
		set_stabljika();
		set_list();
		set_cvjetovi1();

		if (sat.getElapsedTime() >= seconds(2))
		{
			//provjerava je li set_cvjetovi1 aktivan
			if (!(latica5.getFillColor() == Color(178, 102, 255)))
			{
				set_cvjetovi1();
			}

			//provjerava je li set_cvjetovi2 aktivan
			else if (!(latica5.getFillColor() == Color(255, 102, 255)))
			{
				set_cvjetovi2();

				sat.restart();

				while (sat.getElapsedTime()>=seconds(2))
				{
					bool test = true;
				}
			}

			//provjerava je li set_cvjetovi3 aktivan
			else if (!(latica5.getFillColor() == Color(255, 102, 178)))
			{
				set_cvjetovi3();
			}

			sat.restart();
		}
	
	}
}
