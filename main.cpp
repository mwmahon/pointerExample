

/**
 *  mike mahon
 *  pointerFunctionExample.cpp
 *  c++ program to illustrate the use of pointers with functions
 *  today's date is 21/10/17
 *  test
 */


/**< preprocessor directives */
#include <iostream>
using namespace std;


/**< main() function */
int main(void)
{
    /**< variable declarations */
    int num1, num2, div = 0, mod = 0;
    int *div_ptr, *mod_ptr;

    /**< function prototype */
    void intDivision(int n1, int n2, int *dptr, int *mptr);

    cout << "Integer Division and Modulus Using Pointers\n" << endl;

    /**< initialize pointers */
    div_ptr = &div;
    mod_ptr = &mod;

    /**< read in integer values */
    cout << "Enter two integer values: ";
    cin >> num1 >> num2;

    /**< value of div and mod before function call */
    cout << "\nBefore function call: div = " << div << ", mod = " << mod << endl;

    /**< call intDivision() function */
    intDivision(num1, num2, div_ptr, mod_ptr);

    /**< value of div and mod after function call */
    cout << "After function call:  div = " << div << ", mod = " << mod << endl;

    /**< display results */
    cout << "\n" << num1 << " / " << num2 << " = " << div << endl;
    cout << num1 << " % " << num2 << " = " << mod << endl;

    return 0;
}


/**< intDivision() function */
void intDivision(int n1, int n2, int *dptr, int *mptr)
{
    /**< calculate integer division and modulus */
    *dptr = n1 / n2;
    *mptr = n1 % n2;

    return;
}
