#include <iostream>

using namespace std;

class Square {
    int side;
public:
    Square() {
        side = 5;
    }
    void OutputSquare() {
        for (int i = 0; i < side; i++)
        {
            for (int j = 0; j < side; j++)
            {
                cout << "# ";
            }
            cout << endl;
        }
        cout << endl;
    }
};

class Rectangle {
    int side;
public:
    Rectangle() {
        side = 5;
    }
    void OutputRectangle() {
        for (int i = 0; i < side; i++)
        {
            for (int j = 0; j < side*2; j++)
            {
                cout << "# ";
            }
            cout << endl;
        }
        cout << endl;
    }
};

class Triangle {
    int side;
public:
    Triangle() {
        side = 5;
    }
    void OutputTriangle() {
        side *= 2;
        int a = 0;
        for (int i = side; i > 0; i--, i--)
        {
            a++;
            for (int j = 0; j < i / 2; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < a; j++)
            {
                cout << "#";
            }
            cout << endl;
            a++;
        }
        cout << endl;
    }
};

int main()
{
    Square square;
    square.OutputSquare();
    Rectangle rectangle;
    rectangle.OutputRectangle();
    Triangle triangle;
    triangle.OutputTriangle();
}