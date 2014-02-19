#include "base.h"
#include "module1.h"
#include "module2.h"
#include "add.h"
#include "sub.h"

int main()
{
    module1();
    module2();

    cout << "1+1=" << add(1, 1) << endl;
    cout << "1-1=" << sub(1, 1) << endl;
    return 0;
}