/*#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"Input the case: ";
    cin>>button;
    if(button=='1')
    {
        cout<<"Nameste";
    }
    else if(button=='2')
    {
        cout<<"Hello world!";
    }
    else if(button=='3')
    {
        cout<<"Good morning";
    }
    else if(button=='4')
    {
        cout<<"good evening";
    }

} */
#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"Input the button: ";
    cin>>button;
    switch (button)
    {
    case '1':
        cout<<"Hello";
        break;
        case '2':
        cout<<"Nameste";
        break;
        case '3':
        cout<<"Ram ram";
        break;
        default:
        cout<<"Go to hell";
        break;
    }
}