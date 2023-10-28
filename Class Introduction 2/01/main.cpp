#include <iostream>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction addFraction(Fraction other) {
        Fraction result;
        result.numerator = (numerator * other.denominator) + (other.numerator * denominator);
        result.denominator = denominator * other.denominator;
        return result;
    }

    Fraction subFraction(Fraction other) {
        Fraction result;
        result.numerator = (numerator * other.denominator) - (other.numerator * denominator);
        result.denominator = denominator * other.denominator;
        return result;
    }

    Fraction mulFraction(Fraction other) {
        Fraction result;
        result.numerator = numerator * other.numerator;
        result.denominator = denominator * other.denominator;
        return result;
    }

    Fraction divFraction(Fraction other) {
        Fraction result;
        result.numerator = numerator * other.denominator;
        result.denominator = denominator * other.numerator;
        return result;
    }

    int getNum() {
        return numerator;
    }

    int getDenom() {
        return denominator;
    }

    void Set(int a, int b) {
        numerator = a;
        denominator = b;
    }
};

int main() {
    Fraction half, quarter, result;

    half.Set(1, 2);
    quarter.Set(1, 4);

    result = half.addFraction(quarter);
    cout << "1/2 + 1/4 = " << result.getNum() << "/" << result.getDenom() << endl;

    result = half.subFraction(quarter);
    cout << "1/2 - 1/4 = " << result.getNum() << "/" << result.getDenom() << endl;

    result = half.mulFraction(quarter);
    cout << "1/2 * 1/4 = " << result.getNum() << "/" << result.getDenom() << endl;

    result = half.divFraction(quarter);
    cout << "1/2 / 1/4 = " << result.getNum() << "/" << result.getDenom() << endl;

    return 0;
}
