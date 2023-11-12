#include<iostream>
using namespace std;
bool isAlreadyPresent(int arr[], int size, int number);
main()
{   
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];

    int unique[n]; // uniquee elemeents will be stored in this array

    cout<<"Enter "<<n<<" numbers, one per line:"<<endl;

    int num;     /// output of user in separate variable
    int size = 0;   
    for(int i = 0; i<n; i++)
    {   cin>>num;
         arr[i] = num;
        if(isAlreadyPresent(arr,n,arr[i])){
            cout<<"Already Entered: "<<arr[i]<<endl;
        
        }
    
        if(!isAlreadyPresent(arr,n,arr[i])) //// if number is unique then it'll be added on our unique array :)
        {
            unique[size] = num;
            size++;      // size of this array can vary so we'll use another variable to determine its lenght :]
        }
        
    }

//// formatting output :-]    
    cout<<"Unique numbers entered: ";
    for (int i = 0; i < size; i++)
    {
        cout << unique[i] << " ";
    }
    
}
bool isAlreadyPresent(int arr[], int n, int number)
{
    bool isFound=false;
    for(int i = 0; i<n; i++){
    if(arr[number]==arr[i])
    {
        isFound=true;
    break;}
    return isFound;
}
}
