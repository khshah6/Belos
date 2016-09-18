#ifndef FLIGHT_H
#define FLIGHT_H

class Flight
{
	private:
		// first date in range
		int fday;
		int fmonth;
		int fyear;
		
		// last date in range
		int lday;
		int lmonth;
		int lyear;
		 
		// # of travel days
		int timeframe; 
		
		// "tag"
		enum tag { None, Spring Break, Family Fun, Romantic Getaway, All Inclusive, Urban Vacation };
		tag cat;
	
	public:
		// default constructor
		Flight();
		
		// defined constructor
		Flight(int fd, int fm, int fy, int ld, int lm, int ly, int f, tag t);
		
		// getter and setter functions
		int getFday();
		void setFday(int fd);
		int getFmonth();
		void setFmonth(int fm);
		int getFyear();
		void setFyear(int fy);
		
		int getLday();
		void setLday(int ld);
		int getLmonth();
		void setLmonth(int lm);
		int getLyear();
		void setLyear(int ly);
		
		int getFrame();
		void setFrame(int f);
		tag getTag();
		void setTag(tag t);
};

#endif
