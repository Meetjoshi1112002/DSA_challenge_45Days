#include <bits/stdc++.h>
using namespace std;

class selectionSort
{
    vector<int> data;

public:
    selectionSort(vector<int> data)
    {
        this->data = data;
    }
    void sort()
    {
        for (int i = 0; i < data.size(); i++)
        {
            int &min = data[i];
            for (int j = i; j < data.size(); j++)
            {
                if (data[j] < min)
                {
                    swap(data[j], min);
                }
            }
            cout << "Array after " << i << " th run\n";
            for (auto k : data)
            {
                cout << k << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    vector<int> data = {5, 2, 1, 3};
    selectionSort *s = new selectionSort(data);
    s->sort();
    return 0;
}