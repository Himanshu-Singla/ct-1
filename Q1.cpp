// Name = Himanshu Singla
// Roll_Number = 2010991572
// Set = 04
// Q1

//question 1



#include <iostream>
#include <unordered_set>
using namespace std;

// Function to find the minimum index of the repeating element
int findMinIndex(int arr[], int n)
{
    int minIndex = n;

    // create an empty set to store array elements
    unordered_set<int> set;

    // traverse the array from right to left
    for (int i = n - 1; i >= 0; i--)
    {
        // if the element is seen before, update the minimum index
        if (set.find(arr[i]) != set.end())
        {
            minIndex = i;
        }
        // if the element is seen for the first time, insert it into the set
        else
        {
            set.insert(arr[i]);
        }
    }

    // invalid input
    if (minIndex == n)
    {
        return -1;
    }

    // return minimum index
    return minIndex;
}

int main()
{
    int arr[50];
	int f;
	cin>>f;
	for(int i=0;i<f;i++)
    {
        cin>>arr[i];
    }

    int n = f;

    int minIndex;

    try
    {
        minIndex = findMinIndex(arr, n);
    }
    catch (int error)
    {
        cout << "Error: " << error << endl;
    }

    if (minIndex != n)
    {
        cout << "The minimum index of the repeating element is " << minIndex;
    }
    else
    {
        cout << "Invalid Input";
    }

    return 0;
}

