#include <iostream>
#include "flight.cpp"

using namespace std;

int main()
{
	// getting values from user to create flight	
	int fd, fm, fy, ld, lm, ly, f;
	tag t;
	
	fd = getFday();
	fm = getFmonth();
	fy = getFyear();
	ld = getLday();
	lm = getLmonth();
	ly = getLyear();
	f = getFrame();
	t = getTag();
	
	// creating "flight" in heap
	Flight * love = new Flight(fd, fm, fy, ld, lm, ly, f, t);
	
	// seraching API based on informaton
	if (love->cat == Spring Break) { SB(int fd, int fm, int fy, int ld, int lm, int ly, int f, tag t); }
	else if (love->cat == Family Fun) { FF(); }
	else if (love->cat == Romantic Getaway) { RG(); }
	else if (love->cat == All Inclusive) { AI(); }
	else if (love->cat == Urban Vacation) { UV(); }
	
}

int SB(int fd, int fm, int fy, int ld, int lm, int ly, int f, tag t)
{
	enum locations { Key West, Punta Cana, Cancun, Panama City, Gulf Shores };
	
}
