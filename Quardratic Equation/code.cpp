#include <iostream.h>
#include <conio.h>
#include <math.h>

void main()
{
    clrscr();
    float a, b, c, d, root_1, root_2, A, D, flag = -1; // Variable declaration
    cout << "Enter the coefficents of x^2, x, and constant respectively";
    cin >> a >> b >> c;

    d = (b * b) - (4 * a * c); // Finding discriminant

    if (d < 0)
    {
        abs(d);
        flag = 0;
    }

    D = sqrt(d);
    A = 2 * a;

    if (flag == 0)
    {
        cout << "The Quard Eqn has distint and imaginary roots" << endl;
        cout << "Root 1 = " << (-b / A) << " + " << (D / A) << "i" << endl
             << cout << "Root 2 = " << (-b / A) << " - " << (d / A) << "i" << endl;
        exit(0);
    }

    root_1 = (-b / A) + (D / A); // Finding first root
    root_2 = (-b / A) - (D / A); // Finding second root

    if (d == 0)
    {
        cout << "The Quar Eqn has real and equilant roots" << endl;
        cout << "Root is: " << root_2;
    }

    else
    {
        cout << "The quad Eqn has real and distint roots" << endl;
        cout << "Root 1 = " << root_1 << endl
             << "Root 2 = " << root_2;
    }

    getch();
}
