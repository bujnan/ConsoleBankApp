#include <iostream>
#include "clsBankClient.h"

using namespace std;

int main()
{

    clsBankClient Client1 = clsBankClient::Find("A101");

    Client1.Print();
   

    system("pause > 0");
    return 0;
}
