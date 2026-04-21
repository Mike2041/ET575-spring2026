/*
Miguel Eduardo Cabrera Callejas
March, Monday 20, 2026
Lab_19 1D Arrays and Functions 
*/

#include<iostream>

using namespace std;

// Function 1: Collect numbers (sentinel-controlled input)
    int collectnumber(int arr[], int maxSize){
    int value;
    int index = 0;

    cout<<"\n ----- Lab19 and Excercise ----- "<<endl;
    cout<<"\n ----- 1D Arrays and Functions ----- "<<endl;
    cout<<"\n Enter up to 5 non-zero integers (enter 0 to stop): "<<endl;

    while (index < maxSize){
        cout<<"Enter number: ";
        cin>>value;

        if (value == 0){
            break;
        }

        arr[index] = value;
        index++;
    }

    return index; // actual number of elements entered
}

// Function 2: Calculate average
double Averagenumber(int arr[], int size){

    double sum = 0;
    for(int index = 0; index<size; index++){
        sum = sum + arr[index];  // "Sum of all number" to apply in the formula
    }

    return sum / size;  // this part coming from the formula, and gave me the average number
}

// Function 3: Find number Closest to Average
int Closestmean(int arr[], int size, double average){

    int closest = arr[0];
    double minDifference = fabs(arr[0] - average); // fabs=floating-point absolute value.

    for (int index = 1; index < size; index++){
        double difference = fabs(arr[index] - average); // Formula: average = absolute value(number - average).
        if (difference < minDifference){
            minDifference = difference;
            closest = arr[index];
        }
    }
    return closest;
}

// Function 4: Print Result
void Printresult(double average, int closest){

    cout<<"\nThe closest number to average "<<average<<" is "<<closest<<"."<<endl;

}





