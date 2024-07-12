// Linear search in an array
#include <iostream>

using namespace std;

int main()
{

printf("Enter the number of elements in the array: ");
int n;
cin>>n;
int arr[n];

for (int i=0; i<n; i++)
    { 
        printf("Enter the elements for arr[%d] = ",i+1);
        cin>>arr[i];
    }
int x;
printf("Enter the element to be searched and it's address: ");
cin>>x;
int *p;
p=arr;
int i=0;
while (i<n)
{
    if (p[i]==x)
    {
        printf("Element found at index %d\n",i);
        printf("Element found at address %d\n",&p[i]);
        break;
    }
    else
    {
        printf("Element not found\n");
    }
    i++;
}

}