#include<stdio.h>
int binary_search(int arr[],int size,int key_element)
{
	int beg=0;
	int end=size-1;
	while(beg<=end)
	{
		int mid=(beg+end)/2;
		
		if(arr[mid]==key_element)
		{
			return mid;
		}
		else if(arr[mid]<key_element)//key_element is greater here
		{
			beg=mid+1;
		}
		else//key_element is smaller than key
		{
			end=mid-1;
		}
	}
	return -1;//if element is not found
}
void main()
{
	int arr[]={10,12,24,29,39,40,51,56,69};
	int size=sizeof(arr)/sizeof(arr[0]);//You can calculate size dynamically 

	for(int i=0;i<size;i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n\n");
	int key_element;
	printf("\n\nEnter key element to find: ");
	scanf("%d",&key_element);
	
	int result=binary_search(arr,size,key_element);//function call
	if(result!=-1)
	{
		printf("\n\nElement %d is present at index %d\n\n",key_element,result);
	}
	else
	{
		printf("\n\nElement %d is not present in the array\n\n",key_element);
	}	
}
