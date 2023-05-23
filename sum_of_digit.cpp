#include<iostream>
using namespace std;


class number{
    int num,sum;
    public:
    void digitsum(){
        cout<<"Enter the number : ";
        cin>>num;
        sum=0;
        int i=num;
        while(i>0)
        { 
          sum+=i%10;
          i/=10;
        }
        cout<<"The sum of digit of "<<num<<" is "<<sum;
    }
};


int main(){
    number p;
    p.digitsum();
    return 0;
}
