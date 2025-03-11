#include <iostream>
#include "clsInputValidate.h"
#include "clsBankClient.h"
using namespace std;

void DeleteClient()
{
    string AccountNumber = "";

    cout << "Please Enter Account Number: ";
    AccountNumber = clsInputValidate::ReadString();

    while (!clsBankClient::IsClientExist(AccountNumber))
    {
        cout << "\nAccount Number DOES Not Exist, Please Choose Another One: ";
        AccountNumber = clsInputValidate::ReadString();
    }

    clsBankClient Client = clsBankClient::Find(AccountNumber);
    Client.Print();

    cout << "\nAre You Sure You Want to Delete this Client y/n?: ";
    char Answer = 'n';
    cin >> Answer;

    if (Answer == 'y' || Answer == 'Y')
    {
        if (Client.Delete())
        {
            cout << "\nClient Deleted Successfully";
            Client.Print(); // to Verify That the Client Object Has Been Deleted Also From Memory
        }
        else
        {
            cout << "\nError! Client Was NOT Deleted";
        }
    }
}

int main()
{

    DeleteClient();
    

    system("pause > 0");
    return 0;
}
