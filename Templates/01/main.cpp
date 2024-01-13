#include <iostream>
using namespace std;

template<typename t1>
float findAverage(t1* arr , int size){
    float sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return (sum/size);
}

template<typename t1>
void minMax(t1* arr , int size , t1* max , t1* min , int* minIndex , int* maxIndex){

     *max = arr[0];
     *min = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (*min > arr[i])
        {   
            *minIndex = i;
            *min = arr[i];
        }
        if (*max < arr[i])
        {
            *maxIndex = i;
            *max = arr[i];
        }
    }
    
}

int main(){
    
    int arr[10] = {1 , 2 , 29 , 4 , 5 , 6 , 7 , 8 , 9 , 10};
    float ar[10] = {1.9 , 2.9 , 29.4 , 4.3 , 4.5 , 6.3 , 7.9 , 8.9 , 9.0 , 10.0};
    cout << findAverage(arr , 10) << endl;
    cout << findAverage(ar , 10) << endl;

    int max , min;
    int maxIndex , minIndex;
    minMax(arr , 10 , &max , &min , &minIndex , &maxIndex);
    cout << max << endl;
    cout << min << endl;

    float maxf , minf;
    int maxIndexf , minIndexf;
    minMax(ar , 10 , &maxf , &minf , &minIndexf , &maxIndexf);
    cout << maxf << endl;
    cout << minf << endl;

}