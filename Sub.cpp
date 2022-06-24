#include "Sub.h"

Sub::Sub()
{
	number = 0;
	i_number = 0;
	debet = 0;
	told = 0;
}

Sub::Sub(string nm, string sn, string ln, string ad, size_t nb, size_t i_n, size_t dt, size_t td, size_t cd)
{
	number = nb;
	i_number = i_n;
	debet = dt;
	told = td;
	credit = cd;
	name = nm;
	surename = sn;
	last_name = ln;
	adress = ad;

}




size_t Sub::GetNum()
{
	return number;
}

size_t Sub::GetIn()
{
	return i_number;
}

size_t Sub::GetDt()
{
	return debet;
}

size_t Sub::GetTd()
{
	return told;
}

size_t Sub::GetCd()
{
	return credit;
}

string Sub::GetSN()
{
	return surename;
}

string Sub::GetN()
{
	return name;
}

string Sub::GetLN()
{
	return last_name;
}

string Sub::GetAd()
{
	return adress;
}



void Sub::set_num(size_t nb, size_t i_n, size_t dt, size_t td, size_t cd)
{
	number = nb;
	i_number = i_n;
	debet = dt;
	told = td;
	credit = cd;

}

void Sub::set_all(string sn, string nm, string ln, string ad)
{
	name = nm;
	surename = sn;
	last_name = ln;
	adress = ad;
}

bool Sub::equal(const Sub sb)
{
	return number == sb.number && surename == sb.surename && name == sb.name && last_name == sb.last_name && adress == sb.adress && i_number == sb.i_number && debet == sb.debet && told == sb.told && credit == sb.credit;
}

bool Sub::operator<(const Sub obj)
{
	return surename < obj.surename;
}

ostream& operator<<(ostream& os, const Sub& sb)
{
	os << "< " << sb.i_number << "||" << sb.surename << "||" << sb.name << "||" << sb.last_name << "||" << sb.adress << "||" << sb.number << "||" << sb.debet << "тг " << "||" << sb.credit << "тг " << "||" << sb.told << " мин. " << " >" << endl;
	return os;
}
