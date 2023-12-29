#include <bits/stdc++.h>
using namespace std;

class insertionSort
{
    vector<int> data;

public:
    insertionSort(vector<int> data)
    {
        this->data = data;
    }
    void sort()
    {
        for(int i = 0;i<data.size();i++){
            int j = i;
            cout<<"Array after inserting "<<data[i]<<" element\n";
            while(j>0 && data[j]<data[j-1]){
                swap(data[j],data[j-1]);
                j--;
            }
            for(auto k:data){
                cout<<k<<" ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    vector<int> data = {5, 2, 1, 3};
    insertionSort *s = new insertionSort(data);
    s->sort();
    return 0;
}