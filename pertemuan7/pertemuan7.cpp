// pertemuan7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int arr[20];
int n;
int i;

void input()
{
    while (true)
    {
        cout << "enter the number of elements in the aaray:";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\narray should have minimum 1 and maximum 20 elements. \n\n";

    }

}


int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
