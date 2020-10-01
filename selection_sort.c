#include <stdio.h>

int main()
{
    // inputs
    int i, j, min_id, temp;
    int arr[5]={333333,111,88,455,454};
    // sort
    for (i = 0; i<4; i++) {
        min_id = i;
        for (j=i+1; j<5; j++) {
            if (arr[j] < arr[min_id]) {
                min_id = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_id];
        arr[min_id] = temp;
    }
    return 0;
}
