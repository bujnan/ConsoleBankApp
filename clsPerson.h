#pragma once

#include <iostream>
using namespace std;

class clsPerson
{
	string _FirstName;
	string _LastName;
	string _Phone;
	string _Email;


public:

	clsPerson(string FirstName, string LastName, string Phone, string Email)
	{
		_FirstName = FirstName;
		_LastName = LastName;
		_Phone = Phone;
		_Email = Email;
	}


	// Property Set and Get 
	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}

	string GetFirstName()
	{
		return _FirstName;
	}

	__declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;


	// Property Set and Get 
	void SetLastName(string LastName)
	{
		_LastName = LastName;
	}

	string GetLastName()
	{
		return _LastName;
	}

	__declspec(property(get = GetLastName, put = SetLastName)) string LastName;


	// Property Set and Get 
	void SetPhone(string Phone)
	{
		_Phone = Phone;
	}

	string GetPhone()
	{
		return _Phone;
	}

	__declspec(property(get = GetPhone, put = SetPhone)) string Phone;


	// Property Set and Get 
	void SetEmail(string Email)
	{
		_Email = Email;
	}

	string GetEmail()
	{
		return _Email;
	}

	__declspec(property(get = GetEmail, put = SetEmail)) string Email;


	string FullName()
	{
		return _FirstName + " " + _LastName;
	}

};