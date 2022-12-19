#include <iostream>
using namespace std;

int main() {

int numb[7];    // if we change int to char, then we will be able to change the letters.
int i, j;

for (i=0; i<6; i++) {
    cout << "Please enter the number: ";
    cin >> numb[i];
}

    for(i=0; i<=6; i++)
    {
        for (j=i+1; j<=5; j++)
        {
            int temp;
            if(numb[i] > numb [j])    // We proceed from the smallest to the largest, if you change the sign into < then we will count from the largest to the smallest;
            {
                temp = numb[i];
                numb[i] = numb[j];
                numb[j] = temp;
            }
        }
    }
for (i=0; i<6; i++)
{
    cout << endl << numb[i] << endl;
}
}
