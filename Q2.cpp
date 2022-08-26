// Name = Himanshu Singla
// Roll_Number = 2010991572
// Set = 04
// Q2

//question 2

#include <bits/stdc++.h>
using namespace std;

// Function to Check if array
// elements are consecutive
bool areConsecutive(int arr[], int n)
{
    // Sort the array
    sort(arr, arr + n);
    // checking the adjacent elements
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1] + 1)
        {
            return false;
        }
    }
    return true;
}

/* Driver program to test above functions */
int main()
{
    int arr[] = {4, 2, 4, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool res;

    try
    {
        res = areConsecutive(arr, n);
    }
    catch (int error)
    {
        cout << "Error: " << error << endl;
    }

    if (res == true)
        cout << " Array elements are consecutive ";
    else
        cout << " Array elements are not consecutive ";
    return 0;
}

