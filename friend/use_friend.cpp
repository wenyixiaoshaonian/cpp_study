#include "friend_class.h"

int main()
{
	TV T_de;
	Remote R_de;

	T_de.onoff();
	T_de.volup();
	T_de.channelup();

	T_de.chagemode();
	T_de.setting_show();

	R_de.volup(T_de);
	R_de.channelup(T_de);
	R_de.setchannel(T_de,110);

	R_de.setting_show(T_de);
	return 0;
}