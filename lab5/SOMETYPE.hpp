//SWAP
template <class AQIData>
void Swap(AQIData &a, AQIData &b)
{
    AQIData temp = a; 
    a = b;
    b = temp;
}
// SELECTION SORT
template <class AQIData>
void SelectionSort(AQIData a[], int n)
{
    int i, iMax;
    
    while ( n > 1) {
        //Find the largest element:
    for (iMax = 0, i = 1; i < n; i++)
        if (a[i] > a[iMax]) iMax = i;

    //Swap it with the last element:
    Swap(a[iMax], a[n-1]);
    n--;
}
}

// INSERTION SORT
template <class AQIData>
void InsertionSort (AQIData a[], int n)
{

    int i, j;
    AQIData aCurrent;
    
    for (i =1; i < n; i++) {
        
        //Save the current element:
        aCurrent = a[i];
        
        //Find location j where it should be inserted
        //among the first i-1 elements:
        for (j=0; j < i; j++) 
            if (a[j] >= aCurrent) break;
            
        for (int k = i-1; k >= j; k--)
            a[k+1] = a[k];
    
        //Insert saved element where it belongs:
        a[j] = aCurrent;
    }
}

template <class AQIData>  
// BUBBLE SORT
void BubbleSort(AQIData a[], int n)
{
    int i, disorder = n;
    
    while (disorder) {
       
        disorder = 0;
        
        for (i = 1; i < n; i++) {
            if (a[i] < a[i-1]) {
                
                Swap(a[i], a[i-1]);
                disorder++;
                
            }
        }
        n--;
    }
}    
    


template <class AQIData>
void MERGESORT<AQIData>::Sort(AQIData a[], int n)
{
    int n1, n2;
    AQIData *a2;
    if (n <= 2) { //Base Case 
        if ( n== 2 && a[1] < a[0])
            Swap(a[0], a[1]);
        }
        else { // Recursive case:
            n1 = n/2; n2 = n - n1;
            a2 = &a[n1];
            
            Sort(a, n1);
            Sort(a2, n2);
            Merge(a, n1, a2, n2);
        }
}
    
template <class AQIData>
void MERGESORT<AQIData>::Merge(AQIData a1[], int n1, AQIData a2[], int n2)
{
    int n = n1 + n2;
    int i1, i2, j;
    
    i1 = i2 = 0;
    for (j = 0; j < n; j++) {
        if ( i1 < n1 && i2 < n2) {
            work[j] = a1[i1++];
        }
        else if (i1 < n1)
            work[j] = a1[i1++];
        
        else if (i2 < n2)
            work[j] = a2[i2++];
        else
            work[j] = a2[i2++];
        }
        // Copy work[] back to a1[]:
    for (j = 0; j < n; j++)
        a1[j] = work[j];
}

template <class AQIData>
void MERGESORT<AQIData>::Swap(AQIData &a, AQIData &b)
{
    AQIData temp = a;
    a = b;
    b = temp;
}


template <class AQIData>
int QUICKSORT<AQIData>::Split(AQIData a[], int n)
{
    int p = n/2;
    
    AQIData pivot = a[p];
    
    int i = 0, j = n-1;
    
    while (i <= j) {
        if ( a[i] <= pivot)
            i++;
        else if (a[j] >= pivot)
            j--;
        else {
            Swap(a[i], a[j]);
            i++;
            j--;
        }
    
}
    if (p < j) {
        Swap (a[p], a[j]);
        p = j;
    }
    else if (p > i) {
        Swap (a[p], a[i]);
        p=i;
    }

    return p;
}

template <class AQIData>
void QUICKSORT<AQIData>::Sort(AQIData a[], int n)
{
    int p;
    
    if (n <=2) {
        if (n ==2 && a[1] < a[0])
            Swap(a[0], a[1]);
        }
        else {
            p = Split(a, n);
            Sort(a, p);
            Sort(&a[p+1], n-p-1);
        }
    }
    
template <class AQIData>
void QUICKSORT<AQIData>::Swap(AQIData &a, AQIData &b)
{
    AQIData temp = a;
    a = b;
    b = temp;
}
