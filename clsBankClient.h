#pragma once
#include "clsPerson.h"
#include <fstream>
#include <vector>
#include <string>
#include "clsString.h"


class clsBankClient : public clsPerson
{

	string _AccountNumber;
	string _PinCode;
	float _AccountBalance;


public:
	clsBankClient(string FirstName, string LastName, string Email, string Phone, string AccountNumber, string PinCode, float AccountBalance) :
		clsPerson(FirstName, LastName, Email, Phone)
	{
		
		_AccountNumber = AccountNumber;
		_PinCode = PinCode;
		_AccountBalance = AccountBalance;
	}

	string AccountNumber()
	{
		return _AccountNumber;
	}

	// Set and Get Properties
	void SetPinCode(string PinCode)
	{
		_PinCode = PinCode;
	}

	string GetPinCode()
	{
		return _PinCode;
	}

	__declspec(property(get = GetPinCode, put = SetPinCode)) string PinCode;


	void SetAccountBalance(float AccountBalance)
	{
		_AccountBalance = AccountBalance;
	}

	float GetAccountBalance()
	{
		return _AccountBalance;
	}

	__declspec(property(get = GetAccountBalance, put = SetAccountBalance)) float AccountBalance;


	void Print()
	{
		cout << "\nClient Card:";
		cout << "\n________________________________";
		cout << "\nFirst Name  : " << FirstName;
		cout << "\nLast Name   : " << LastName;
		cout << "\nFull Name   : " << FullName();
		cout << "\nEmail       : " << Email;
		cout << "\nPhone       : " << Phone;
		cout << "\nAcc. Number : " << _AccountNumber;
		cout << "\nPin Code    : " << _PinCode;
		cout << "\nBalance     : " << _AccountBalance;
		cout << "\n________________________________";
	}

};
