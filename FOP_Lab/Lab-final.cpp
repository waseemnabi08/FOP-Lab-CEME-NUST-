#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void insert(int p[], int size, int max);
void dlt(int p[], int size);
int search(int p[], int size);
void print(int p[], int size);
void printdeleted();

int main()
{
    int max = 5;
    int choice;
    int index;
    int* arr = new int[max];
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    insert(arr, size, max);
    cout << "Please press 1 to delete an element from the array, 2 to search for an element, 3 to print the array, 4 to print deleted data, or 5 to exit: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        dlt(arr, size);
        break;

    case 2:
        //int num;
        //cout << "Number: ";
        //cin >> num;
        cout << "Element is found at index number: " << search(arr, size) << endl;
        break;

    case 3:
        print(arr, size);
        break;

    case 4:
        printdeleted();
        break;

    case 5:
        exit(1);

    default:
        cout << "Invalid choice." << endl;
        break;
    }

    system("pause");
    return 0;
}

void insert(int p[], int size, int max)
{
    if (size > max)
    {
        p = new int[size];
    }

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << " : ";
        cin >> p[i];
    }
}

void dlt(int p[], int size)
{
    ofstream outfile("data.txt");
    int num;
    cout << "Enter the number you want to delete: ";
    cin >> num;

    for (int i = 0; i < size; i++)
    {
        if (p[i] == num)
        {
            outfile << "Index : " << i << " " << p[i] << endl;
            cout << "Element at index " << i << " is deleted." << endl;
            for (int j = i; j < size - 1; j++)
            {
                p[j] = p[j + 1];
            }
            p[size - 1] = 0;
            return;
        }
    }

    cout << "No such element exists." << endl;
}

int search(int p[], int size)
{
    int num;
    cout << "Number: ";
    cin >> num;
    for (int i = 0; i < size; i++)
    {
        if (p[i] == num)
        {
            return i;
        }
    }

    cout << "No such element exists." << endl;
    exit(1);
}

void print(int p[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << ": " << p[i] << endl;
    }
}

void printdeleted()
{
    ifstream infile("data.txt");
    string index;
    string num;
    while (infile >> index >> num)
    {
        cout << index << "\t" << num << endl;
    }
    infile.close();
}
