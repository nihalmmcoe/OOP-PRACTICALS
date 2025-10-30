#include <iostream>
using namespace std;
template<class T>
	void selection(T arr[],int n){
		T temp;
		for(int i=0;i<n;i++){
			int min=i;
			for(int j=i+1;j<n;j++){
				if(arr[j]<arr[min]){
					min=j;
				}
			}
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
		cout<<"Sorter Array:\n";
		for(int i=0;i<n;i++){
			cout<<arr[i]<<"\t";
		}
	}
int main(){
	int n,i;
	cout<<"Enter the size of the array:";
	cin>>n;
	int arr[n];
	float arr1[n];
	int choice;
	do{
		cout<<"1. Float Array\t\t2.Integer Array";
            cout<<"Enter the choice:";
		cin>>choice;
		switch(choice){
		case 1:
			cout<<"\n Enter the elements of the float array:";
					for(i=0;i<n;i++){
						cin>>arr1[i];
					}
				selection(arr1,n);
				break;
		case 2:
			cout<<"Enter the elements of the int array:";
				for(i=0;i<n;i++){
					cin>>arr[i];
				}
				selection(arr,n);
		}
	}
	while(choice!=3)
	return 0;
}

