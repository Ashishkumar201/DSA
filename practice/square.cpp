// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;

//     for(int i=0;i<n;i++)
//     {
//         for( int j=0;i<n;j++)
//         {
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
// }
#include <iostream>

int main() {
    int sideLength;
    std::cout << "Enter the side length of the square: ";
    std::cin >> sideLength;

    // Outer loop for rows
    for (int i = 0; i < sideLength; ++i) {
        // Inner loop for columns
        for (int j = 0; j < sideLength; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl; // Move to the next line after each row
    }

    return 0;
}