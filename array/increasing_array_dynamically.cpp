#include <iostream>
using namespace std;

int main(){
int n;
cin>>n;
printf("Enter the number of elements in the array: ");
int arr[n];

int *p= new int[5];
int *q= new int[10];


for (int i=0; i<n; i++){ 

cin>>p[i];
printf("Enter the elements of the array for p array: p[%d]=%d\n",i+1,p[i]);
    printf("elements of first array: ");
    cout<<p[i]<<" ";
}
for (int i=0; i<n; i++){
    q[i]=p[i];
}
for (int i=0; i<n; i++){
    cout<<q[i]<<" ";
}

return 0;
}