#pragma once
#include <iostream>
#include <string>
#include <ostream>
using namespace std;

class Sub
{
private:
	size_t number;
	size_t i_number;
	size_t debet;
	size_t told;
	size_t credit;
	string surename;
	string name;
	string last_name;
	string adress;



public:
	Sub();
	Sub(string nm, string sn, string ln, string ad, size_t nb, size_t i_n, size_t dt, size_t td, size_t cd);

	size_t GetNum();
	size_t GetIn();
	size_t GetDt();
	size_t GetTd();
	size_t GetCd();
	string GetSN();
	string GetN();
	string GetLN();
	string GetAd();

	void set_num(size_t nb, size_t i_n, size_t dt, size_t td, size_t cd);
	void set_all(string nm, string sn, string ln, string ad);
	bool equal(const Sub sb);
	bool operator<(const Sub obj);
	friend ostream& operator<<(ostream& os, const Sub& sb);
};
