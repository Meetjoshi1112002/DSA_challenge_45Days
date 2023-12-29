#include <bits/stdc++.h>
using namespace std;

class bubbleSort
{
    vector<int> data;

public:
    bubbleSort(vector<int> data)
    {
        this->data = data;
    }
    void sort()
    {
        for (int i = data.size() - 1; i >= 0; i--)
        {
            int f = 0;
            for (int j = 0; j <= i - 1; j++)
            {
                if (data[j] > data[j + 1])
                {
                    // swap has occured so array is not sorted
                    f = 1;
                    swap(data[j], data[j + 1]);
                }
            }
            if (f == 0)
            {
                // if no swap has occured then array is sorted and this reduces time complexity
                break;
            }
            cout << "Array after " << i << " th itreation \n";
            for (auto i : data)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    vector<int> data = {5, 2, 1, 3};
    bubbleSort *s = new bubbleSort(data);
    s->sort();
    return 0;
}