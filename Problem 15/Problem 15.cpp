// Starting in the top left corner of a 2 x 2 grid, and only being able to move to the right and down, there are 6 exactly routes to the bottom right corner.
// How many such routes are there through a 20 x 20 grid?

#include <iostream>
#include <cmath>
#include <string>


using namespace std;


int main()
{
    //string hist[1000000];
    string *hist = new string[1000000];

    for (int i = 0; i <= 999999; i++)
    {
        hist[i] = "a";
    }
    int next = 0;

    for (int i = 0; i <= pow(2, 20); i++)
    {
        
        int x = 0;
        int y = 0;
        string path = "";
        bool nu = true;

        while (x != 20 && y != 20)
        {
            srand(time(NULL));
            int die = rand() % 2;
            if (die == 0 && y <= 20)
            {
                y += 1;
                path.append("0");
            }
            else if (die == 1 && x <= 20)
            {
                x += 1;
                path.append("1");
            }
        }
        for (int k = 0; k < 1000000; k++)
        {
            if (hist[k] == path)
            {
                nu = false;
            }
        }
        if (nu = true)
        {
            hist[next] = path;
            cout << hist[next] << "\n";
            next = next + 1;
        }
    }

    next = next + 1;
    cout << next;
    delete []hist;
    system("pause");

    











};

