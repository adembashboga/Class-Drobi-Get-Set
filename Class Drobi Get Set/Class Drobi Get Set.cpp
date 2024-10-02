#include <iostream>
using namespace std;

class Drob
{
private:
    int x;
    int y;
public:
    void Print()
    {
        cout << "Numerator: " << x << "\tDenominator: " << y << endl;
    }
    void Input(int a, int b)
    {
        x = a;
        y = b;
    }
    void Input()
    {
        x = rand() % 20;
        y = rand() % 20 + 1;
    }
    int getNumerator() const
    {
        return x;
    }
    void setNumerator(int numerator)
    {
        x = numerator;
    }
    int getDenominator() const
    {
        return y;
    }
    void setDenominator(int denominator)
    {
        if (denominator != 0) {
            y = denominator;
        }
        else {
            cout << "Denominator cannot be 0!" << endl;
        }
    }
};

int main()
{
    srand(time(0));

    Drob a;
    a.Input(1, 2);
    a.Print();

    Drob b;
    b.Input();
    b.Print();

    cout << "\nUsing accessors (get and set):\n";

    a.setNumerator(10);
    a.setDenominator(5);
    cout << "New values of a: ";
    a.Print();
    cout << "Numerator of b: " << b.getNumerator() << endl;
    cout << "Denominator of b: " << b.getDenominator() << endl;
}