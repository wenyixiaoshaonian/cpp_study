#include "friend_class.h"
#include <iostream>
using namespace std;
#if 1
void TV::volup()
{
	volum++;
}

void TV::voldown()
{
	volum--;
}

void TV::channelup()
{
	channel++;
}

void TV::channeldown()
{
	channel--;
}

void TV::setting_show() const
{
	cout << "TV status : " << state << endl
			  << "TV volum : "  << volum << endl
			  << "TV channel : " << channel << endl
			  << "TV maxchannel : " << maxchannel << endl
			  << "TV mode : " << mode << endl
			  << "TV input : " << input << endl;
}

void Remote::volup(TV & T)
{
	T.volum++;
}
void Remote::voldown(TV & T)
{
	T.volum--;
}
void Remote::channelup(TV & T)
{
	T.channel++;
}
void Remote::channeldown(TV & T)
{
	T.channel--;
}
void Remote::setchannel(TV & T,int c)
{
	T.channel = c;
}
void Remote::setting_show(TV & T) const
{
	cout << "TV status : " << T.state << endl
			  << "TV volum : "  << T.volum << endl
			  << "TV channel : " << T.channel << endl
			  << "TV maxchannel : " << T.maxchannel << endl
			  << "TV mode : " << T.mode << endl
			  << "TV input : " << T.input << endl;
}
#endif