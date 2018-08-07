#include<iostream>
using namespace std;

void MERGE(int A[], int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;
    int d[n1], e[n2];
    for(int i=0;i<n1;i++){
        d[i] = A[ p + i ];
        // cout<< d[i]<< " ";
    }
    // cout<<endl;
    for(int j=0;j<n2;j++){
        e[j] = A[ q + j + 1];
        //  cout<< e[j]<< " ";
    }
    // cout<<endl;
    int i=0, j=0;
     for(int k=p;k<r+1;k++){
        if(d[i] < e[j]){
            A[k] = d[i];
            i++;
        } else {
            A[k] = e[j];
            j++;
        }
    }

}

void mergeSort(int A[], int p, int r)
{
   int q =p +(r-p)/ 2;
   if(p < r){
       mergeSort(A, p, q);
       mergeSort(A, q+1, r);
        MERGE(A, p, q, r);
   }
  
}

int main() {
    int c[] = {12, 25, 2, 23};
    mergeSort(c,0,3);
    for(int i=0;i<4;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;
    return 0;
}

