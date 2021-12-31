#ifndef TV_H_
#define TV_H_
#include <iostream>

class TV
{
private:
	int state;
	int volum;
	int maxchannel;
	int channel;
	int mode;	//antenna or cable 
	int input;	//TV or DVD
public:
	friend class Remote;
	enum {off,on = 1};
	enum {minval,maxval = 20};
	enum {antenna,cable = 1};
	enum {Tv,DVD = 1};

	TV(int s = off,int vol = 30) : state(s),volum(30), maxchannel(125), channel(5),mode(antenna),input(Tv) {};
	void onoff() { state = (state == off) ? on:off;}
	void volup();
	void voldown();
	void channelup();
	void channeldown();
	void chagemode() { mode = (mode == antenna) ? cable:antenna;};
	void changeinput() { input = (input == Tv) ? DVD:Tv;};
	void setting_show() const;
};

class Remote
{
public:
	void onoff(TV & T) { T.state = (T.state == T.off) ? T.on:T.off;}	
	void volup(TV & T);
	void voldown(TV & T);
	void channelup(TV & T);
	void channeldown(TV & T);
	void setchannel(TV & T,int c);
	void chagemode(TV & T) { T.mode = (T.mode == T.antenna) ? T.cable:T.antenna;};
	void changeinput(TV & T) { T.input = (T.input == T.Tv) ? T.DVD:T.Tv;};
	void setting_show(TV & T) const;	
};

#endif