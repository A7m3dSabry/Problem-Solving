

/*

I don't remember the exact question formula but i know the answer

*/

/*

you have an array with positive number
you need to calculate the minimum average of consequetive non zero numbers

EX: 1 2 3 0 1 0 1 0 0 0 1

min average = (1 + 1 + 1) / 3 = 1

*/

int caclulate(int arr[],count){

    int min = INT_MAX;
    int window[3] = {0};
    int sum = 0;
    int indexer = 0;

    for (int i = 0 ; i < count ; i++){

        if (arr[i] == 0) {
            continue;
        }

        window[indexer % 3] = arr[i];

        if (window[2] != 0 ){

            sum = window[0] = window[1] = window[2];
            min = (min > sum)? sum : min;

        }

    }

return min/3;



}