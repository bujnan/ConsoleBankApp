#include <iostream>
#include "clsInputValidate.h"
#include "clsBankClient.h"
using namespace std;

void ReadClientInfo(clsBankClient& Client)
{
    cout << "Please Enter First Name: ";
    Client.FirstName = clsInputValidate::ReadString();

    cout << "Please Enter Last Name: ";
    Client.LastName = clsInputValidate::ReadString();

    cout << "Please Enter Email: ";
    Client.Email = clsInputValidate::ReadString();

    cout << "Please Enter Phone: ";
    Client.Phone = clsInputValidate::ReadString();

    cout << "Please Enter Pin Code: ";
    Client.PinCode = clsInputValidate::ReadString();

    cout << "Please Enter Balance: ";
    Client.AccountBalance = clsInputValidate::ReadFloatNumber();
}

void UpdateClient()
{
    string AccountNumber = "";

    cout << "Please Enter Account Number: ";
    AccountNumber = clsInputValidate::ReadString();

    while (!clsBankClient::IsClientExist(AccountNumber))
    {
        cout << "Account Number NOT Found! Please Choose Another One: ";
        AccountNumber = clsInputValidate::ReadString();
    }

    clsBankClient Client1 = clsBankClient::Find(AccountNumber);
    Client1.Print();

    cout << "\n\nUpdate Client Info: ";
    cout << "\n----------------------\n";
    ReadClientInfo(Client1);
}

int main()
{

    UpdateClient();

    system("pause > 0");
    return 0;
}
