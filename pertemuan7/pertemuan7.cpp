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
    // accep array elements
    cout << "\n-----------------\n";
    cout << "enter array elements\n";
    cout << "----------------------\n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}

void linearsearch()
{
    char ch;
    int ctr;
    int item;

    do
    {
        // accept the number to be searched
        cout << "\nenter the element you want to search:"; // step 1
        cin >> item;

        ctr = 0;
        i = 0; // step 2
        while (i < n)// step 3
        {
            ctr++;
            if (arr[i] == item)
            {
                cout << "\n" << item << " found at position " << (i + 1) << endl; // step 6
                break;
            }
            i++; // step 4 
        }
        if (i == n) // step 5
            cout << "\n" << item << "not found in the array\n";
        cout << "\nnumber of comparisions:" << ctr << endl;

        cout << "\ncontinue search (y/n) :";
        cin >> ch;
    } while ((ch == 'y') || (ch == 'y'));
}

void display()
{
    cout << " array elements are:";
    for (i = 0; < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main()
{
    input();
    linearsearch();
    display();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
