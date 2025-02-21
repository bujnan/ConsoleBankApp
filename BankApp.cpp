#include <iostream>
#include "clsPErson.h"
using namespace std;

int main()
{

    clsPerson Person1 = clsPerson("Imad", "Boujnane", "+190842326588", "email@gmail.com");

    cout << Person1.FullName() << endl;

    system("pause > 0");
    return 0;
}
