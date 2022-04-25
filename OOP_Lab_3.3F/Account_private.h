#pragma once
#include "Money.h"
#include <string>
using namespace std;

class Account_private : private Money
{
private:
	string secondname;
	int no;
	double percent;
public:
	string getSecondame() const { return secondname; }
	int getNo() const { return no; }
	double getPercent() const { return percent; }

	Account_private();
	Account_private(int, double);
	Account_private(const Account_private&);

	Account_private& operator =(const Account_private&);
	operator string() const;

	friend ostream& operator <<(ostream&, const Account_private&);
	friend istream& operator >>(istream&, Account_private&);

	void setSecondname(string);
	bool setNo(int);
	bool setPercent(double);
	void setSumma();

	double Total(const Account_private&);

	void ChangeOwner();
	void GetMoney();
	void AddMoney();
	Account_private MakePercent(Account_private&);
	Account_private ToDollar(Account_private&);
	Account_private ToEuro(Account_private&);
	void Propys();

	Account_private Add(const Account_private&, const Account_private&, Account_private&);
	Account_private Subtract(const Account_private&, const Account_private&, Account_private&);
	Account_private Multiply(Account_private&, const double);
	Account_private Division(Account_private&, const double);
	Account_private DivOfSums(const Account_private&, const Account_private&, Account_private&);
	Account_private Change(int, int, Account_private&);
	friend bool operator < (Account_private x, Account_private y);
	friend bool operator <= (Account_private x, Account_private y);
	friend bool operator > (Account_private x, Account_private y);
	friend bool operator >=(Account_private x, Account_private y);
	friend bool operator == (Account_private x, Account_private y);
	friend bool operator != (Account_private x, Account_private y);
};

