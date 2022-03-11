// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
    int count = 0;
    for (int i = 0; i < len; i++)
        for (int j = 0; j <len; j++)
        if (i != j)
            if (arr[i] + arr[j] == value)
                count++;
    return count / 2;
}
int countPairs2(int *arr, int len, int value) {
    int count = 0;
    for (int i = 0; i < len; i++)
        for (int j = len - 1; j > i; j--)
            if (arr[i] + arr[j] == value)
                count++;
    return count;
}
int binar (int *arr, int l, int r, int x) {   
    int lt = l, rt = r, mid = 0;;
    while (lt <= rt) {
        mid = (lt + rt) / 2;
        if (arr[mid] == x) {
            return 1;
            break;
        }
        if (x < arr[mid])
            rt = mid - 1;
        else
        if (x > arr[mid])
            lt = mid + 1;
    }
    return 0;
}
int countPairs3(int *arr, int len, int value) {
    int count = 0;
    for (int i = 0; i < len; i++) {
       count += binar(arr, i, len - 1, value - arr[i]);
    }
    return count;
}
