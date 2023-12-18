#include <iostream>
#include <string>

using namespace std;

string toRoman(int num) {
    string romanNumeral;
    int numList[] = { 1000,900,500,400,100,90,50,40,10,9,5,4,1 };
    string romanChars[] = { "M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I" };

    for (int i = 0; i < 13; i++) {
        while (num >= numList[i]) {
            num -= numList[i];
            romanNumeral += romanChars[i];
        }
    }

    return romanNumeral;
}

int main() 
{
    setlocale(LC_ALL, "");
    string number;
    cout << "ведите значение числа 5который надо перевести в римские" << endl;
    cin >> number;
    int num = stoi(number);

    string romanNumeral = toRoman(num);
    cout << romanNumeral << endl;

    return 0;
}