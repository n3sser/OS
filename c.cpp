#include <iostream>
#include <time.h>
#include <algorithm>
#include <vector>
using namespace std;

bool fun(int i, int j)
{
    return(i>j);
}

int main()
{
    srand (time(NULL));
    
    int n;
    cout<<"Enter integer number (10000-1000000): ";
    cin >> n;
    
    
    int *arr = new int[n];
    
    for(int i=0; i<n; i++)
    {
        int num = rand() % 1000;
        cout<<num<<" ";
        arr[i] = num;
    }
    
    cout<<endl;
    
    vector<int> numbers(arr, arr+n);
    vector<int>::iterator it;
    
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    it = find(numbers.begin(), numbers.end(), num);
    
     if (it != numbers.end())
        cout << "Element found: " << it-numbers.begin() << '\n';
    else
        cout << "not found(-1)\n";

    return 0;
}
