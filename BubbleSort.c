//BUBBLE SORT!

#include <stdio.h>

void sorter(int arr[], int sizearr) {
    int temp;
    for(int i = 0; i < sizearr-1; i++) { //each pass (size-1 coz index starts from 0)

        for (int j = 0; j < sizearr-i-1; j++) { /*each element in pass (size-i-1 coz 'i' positions of the array are
                                                 already sorted so no point in checking again) */
 
            if(arr[j] > arr[j+1]) { //variable swappage
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                
            }
        }
    }
}

void printer(int arr[], int sizearr) { //element printing
    for (int k = 0; k < sizearr; k++) {
        printf("%d ", arr[k]);
    }
}

int main() {
    int arr[] = {9,6,7,3,5,3};
    int sizearr = (sizeof(arr)/sizeof(arr[0]));

    sorter(arr, sizearr);
    printer(arr,sizearr);
}