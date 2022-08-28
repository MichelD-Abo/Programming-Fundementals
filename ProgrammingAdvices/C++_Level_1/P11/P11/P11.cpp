#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N1;
    double N2;
    float N3;
    string str;

    str = "43.22";

    double str_double = stod(str);
    float str_float = stof(str);
    int str_int = stoi(str);

    cout << str_double << endl
        << str_float << endl
        << str_int << endl;

    N1 = 20;
    N2 = 33.5;
    N3 = 55.23;

    string int_str = to_string(N1);
    string double_str = to_string(N2);
    string float_str = to_string(N3);

    cout << int_str << endl
        << double_str << endl
        << float_str << endl;

    int N5, N6, N7;
    N5 = N3;
    N6 = int(N3);
    N7 = (int)N3;

    cout << N5 << endl
        << N6 << endl
        << N7 << endl;





    
}
