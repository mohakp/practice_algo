#include<iostream>
using namespace std;

int main() {
	
int a[] = {12, 1, 25, 2, 23};
for(int i=1;i<5;i++) {
    int key = a[i];
    int j = i-1;
    while(j>=0 && a[j] > key)
    {
        a[j+1] = a[j];
        j--;
    }
    a[j+1] = key;

}

for(int i=0;i<5;i++){
cout<<a[i]<<" ";
}
return 0;
}
