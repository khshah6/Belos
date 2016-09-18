#include <iostream>
#include "flight.h"

using namespace std;

// default constructor
Flight() {
	fday = fmonth = fyear = lday = lmonth = lyear = timeframe = 0;
	cat = None; }
			
// defined constructor
Flight(int fd, int fm, int fy, int ld, int lm, int ly, int f, tag t) {
	fday = fd;
	fmonth = fm;
	fyear = fy;
	lday = ld;
	lmonth = lm;
	lyear = ly;
	timeframe = f;
	cat = t; }

// years
int Flight::getFyear() {
	int fy;
	cout << "Enter the year of the start of the range: " <<endl;
	cin >> fy;
	return fy; }

void Flight::setFyear(int fy) { fyear = fy; }

int Flight::getLyear() {
	int ly;
	cout << "Enter the year of the end of the range: " <<endl;
	cin >> ly;
	return ly; }

void Flight::setLyear(int ly) { lyear = ly; }

// months
int Flight::getFmonth() {
	int fm;
	cout << "Enter the month of the start of the range: " <<endl;
	cin >> fm;
	return fm; }

void Flight::setFmonth(int fm) { fmonth = fm; }

int Flight::getLmonth() {
	int lm;
	cout << "Enter the month of the end of the range: " <<endl;
	cin >> lm;
	return lm; }

void Flight::setLmonth(int lm) { lmonth = lm; }

// days
int Flight::getFday() {
	int fd;
	cout << "Enter the day of the start of the range: " <<endl;
	cin >> fd;
	return fd; }

void Flight::setFday(int fd) { fday = fd; }

int Flight::getLday() {
	int ld;
	cout << "Enter the day of the end of the range: " <<endl;
	cin >> ld;
	return ld; }

void Flight::setLyear(int ld) { lday = ld; }

// timeframe
int Flight::getFrame() {
	int f;
	cout << "How many days would you like to travel? " <<endl;
	cin >> f;
	return f; }
	
void Flight::setFrame(int f) { frame = f; )

// tag
tag Flight::getTag() {
	tag t;
	cout << "Chose a catagory! (Spring Break, Family Fun, Romantic Getaway, All Inclusive, Urban Vacation) " <<endl;
	cin >> t;
	return t; }
	
void Flight::setTag(tag t) {cat = t; }	
