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

void AddNewClient()
{
    string AccountNumber = "";
    cout << "Please Enter Account Number: ";
    AccountNumber = clsInputValidate::ReadString();
    
    while (clsBankClient::IsClientExist(AccountNumber))
    {
        cout << "Account Number Already Exist! Please Choose Another Account Number: ";
        AccountNumber = clsInputValidate::ReadString();
    }

    clsBankClient NewClient = clsBankClient::GetAddNewClientObject(AccountNumber);
    ReadClientInfo(NewClient);

}

int main()
{

    AddNewClient();

    system("pause > 0");
    return 0;
}
