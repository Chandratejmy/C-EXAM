#include<iostream>
#define size 5
using namespace std;

class queues
{
private:
    int i, j, s[size], r, f, count;

public:
    int item;

    queues()
    {
        r = -1;
        f = 0;
        count = 0;
    }

    void enqueue()
    {
        if (count == size)
        {
            cout << "Queue is Full" << endl;
        }
        else
        {
            r = (r + 1) % size;
            s[r] = item;
            count++;
        }
    }

    void dequeue()
    {
        if (count == 0)
        {
            cout << "Queue is Empty" << endl;
        }
        else
        {
            f = (f + 1) % size;
            count--;
        }
    }

    void display()
    {
        if (count == 0)
        {
            cout << "Queue is Empty" << endl;
        }
        else
        {
            j = f;
            for (i = 0; i < count; i++)
            {
                cout << s[j] << endl;
                j = (j + 1) % size;
            }
        }
    }
};

int main()
{
    queues q;
    int choice;

    while (1)
    {
        cout << "\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n";
        cout << "Enter the choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value: ";
            cin >> q.item;
            q.enqueue();
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.display();
            break;

        default:
            return 0;
        }
    }
}
