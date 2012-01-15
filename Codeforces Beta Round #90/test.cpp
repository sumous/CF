#include<iostream>
using namespace std;
class Con
{
    public:
    Con(){cout<<1;}
    Con(Con &c){cout<<"hello, world";}
};
void show(Con a)
{
    return ;
}
int main()
{
    Con c;
    show(c);
    return 0;
}
