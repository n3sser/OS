

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
    cout<<"Enter integer number where the number is divisible by 4 (10000-1000000): ";
    cin >> n;
    
    
    int *arr = new int[n];
    
    for(int i=0; i<n; i++)
    {
        int num = rand() % 1000000 + 10000;
        cout<<num<<" ";
        arr[i] = num;
    }
    
    cout<<endl;
    


    /*


	a)

    sort(arr, arr+(n/4));
    sort(arr+(n/4), arr+(n/4)+(n/4));
    sort(arr+(n/4)+(n/4), arr+(n/4)+(n/4)+(n/4));
    sort(arr+(n/4)+(n/4)+(n/4), arr+n);
    */

	//b)
    
    sort(arr, arr+(n/4),fun);
    sort(arr+(n/4), arr+(n/4)+(n/4),fun);
    sort(arr+(n/4)+(n/4), arr+(n/4)+(n/4)+(n/4),fun);
    sort(arr+(n/4)+(n/4)+(n/4), arr+n, fun);
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    
    
    
    
    return 0;
}
