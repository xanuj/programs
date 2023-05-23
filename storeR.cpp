#include<iostream>
using namespace std;

class series
{
    int num;

public:
    void series1()
    {
        cout << "Enter the term to calculate the sum : ";
        cin >> num;
        double sum = 0;
        for (int i = 1; i <= num; i++)
        {
            sum += (1 / power(i, i));
        }
        cout << "The sum of series to term " << num << " is " << sum;
    }

    double power(double a, double b)
    {  

        double powerr= 1;
        for (int i = 1; i <= b; i++)
        {
            powerr *= a;
        }
        return powerr;
    }
};




int main(){
    series s1;
    s1.series1();
    return 0;
}