#include <iostream>

using namespace std;

int main()
{
    float length, radius, paint_cost;

    int choice;
    cout << " Press 1 for 2D shapes and 2 for 3D shapes : ";
    cin >> choice;

    switch (choice)
    {
        case 1:
        {
            int choice2;
            cout << " press 1 for square 2 for circle : ";
            cin >> choice2;
            switch(choice2)
            {
                case 1:
                {
                    cout << "Enter length of side: ";
                    cin >> length;
                    cout << "Area of square is  " << length * length << endl;
                    cout << "Perimeter of square is " << 4 * length << endl;
                    break;
                }

                case 2:
                {
                    cout << "Enter radius of circle: ";
                    cin >> radius;
                    cout << "Area of circle is " << 3.14 * radius * radius << endl;
                    cout << "circumference of circle is " << 2 * 3.14 * radius << endl;
                    break;
                }

                default:
                {
                    cout << "invalid choice : " << endl;
                    break;
                }
            }
            break;
        }

        case 2:
        {
            int choice3;
            cout << "press 1 for cube , 2 for sphere : " ;
            cin >> choice3;

            switch (choice3)
            {
                case 1:
                {
                    cout << " Enter length of sides : " ;
                    cin >> length;
                    cout << " surface area  of cube is " <<  6 * length * length << endl;
                    cout << " volume of cube is " << length * length * length << endl;
                    paint_cost = 141.50 * length;
                    cout << "Paint cost for cube is " << paint_cost << endl;
                    break;
                }

                case 2:
                {
                    cout << " Enter radius : ";
                    cin >> radius;
                    cout << "Surface area of sphere is " << 4 * 3.14 * radius * radius << endl;
                    cout << " volume of sphere is " << 4 / 3 * (3.14 * radius * radius * radius) << endl;
                    paint_cost = 141.50 * radius;
                    cout << " paint cost of sphere is " << paint_cost << endl;
                    break;
                }

                default:
                {
                    cout << "invalid choice " << endl;
                    break;
                }
            }
            break;
        }

        default:
        {
            cout << "invalid choice " << endl;
            break;
        }
    }
    return 0;
}
