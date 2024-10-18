

#include <iostream>
using namespace std; 

int main()
{
    string filename;
    const int arraySize = 5;
    int total = 0;

    
    cout << "what is the file name\n";
    cin >> filename;

   /* cout << "how many numbers do you have on this file\n";
    cin >> arraySize; */
    int test[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        total = total + test[i];
        cout << "number" << i << " is = ";
        cin >> test[i];
        cout << "\n ";
        
    }

    cout << "the total of all the numbers in the array is " << total << "\n";
    cout << "the average of the numbers is " << (total / 5) << "\n";

    int count; 
    int highest;
    int lowest;
    lowest = test[0];
    highest = test[0];

    for (count = 1; count < 5; count++)
    {
        if (test[count] > highest)
        {
            highest = test[count];
        }
       
    }

    for (count = 1; count > 5; count++)
    {
        if (test[count] < lowest)
        {
            highest = test[count];
        }
    }

    cout << "the highest number is " << highest << "\n";
    cout << "the lowest number is " << lowest << "\n";


}


