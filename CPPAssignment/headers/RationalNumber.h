// write the code for the RationalNumber class
#include <iostream>


using namespace std;

class Rational
{
    private:
        int P;
        int Q;
    public:
        Rational(int p = 1, int q = 1)
        {
            P = p;
            Q = q;
        }
    
    friend Rational operator+(Rational r1, Rational r2);

    friend ostream & operator<<(ostream &out, Rational r3);
};

Rational operator+(Rational r1, Rational r2)
    {
        Rational temp;
        if(r1.Q == r2.Q)
        {
            temp.P = r1.P + r2.P;
            temp.Q = r1.Q;
        }
        else
        {
            temp.P = ((r1.P) * (r2.Q)) + ((r2.P) * (r1.Q));
            temp.Q = (r1.Q) * (r2.Q);
        }

        return temp;
    }