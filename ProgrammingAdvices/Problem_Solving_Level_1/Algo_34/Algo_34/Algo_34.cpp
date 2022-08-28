#include <iostream>

using namespace std;

float  givePercentAccordingtoSaleFunction(float totalSales)
{
    if (totalSales >= 1000000)
    {
        return 0.01;
    }
    else if (totalSales >= 500000)
    {
        return 0.02;
    }
    else if (totalSales >= 100000)
    {
        return 0.03;
    }
    else if (totalSales >= 50000)
    {
        return 0.05;
    }
    else
    {
        return 0;
    }
}
int main()
{
    float totalSales;

    cout << "Entrer your total sales: \n";
    cin >> totalSales;
    cout << endl;

    cout << "Your perscent is: " << givePercentAccordingtoSaleFunction(totalSales) << endl;
    cout << "Your commision is: " << givePercentAccordingtoSaleFunction(totalSales) * totalSales << endl;

    return 0;
}
