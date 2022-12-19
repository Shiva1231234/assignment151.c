Q=1
/*
#include <stdio.h>    
     
int main()    
{    
    //Initialize array     
    int arr[] = {25, 11, 7, 75, 56};      
        
    //Calculate length of array arr    
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    //Initialize max with first element of array.    
    int max = arr[0];    
        
    //Loop through the array    
    for (int i = 0; i < length; i++) {     
        //Compare elements of array with max    
       if(arr[i] > max)    
           max = arr[i];    
    }      
    printf("Largest element present in given array: %d\n", max);    
    return 0;    
}   
*/
Q=2
/*
#include <stdio.h>    
     
int main()    
{    
    //Initialize array     
    int arr[] = {25, 11, 7, 75, 56};      
        
    //Calculate length of array arr    
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    //Initialize min with first element of array.    
    int min = arr[0];    
        
    //Loop through the array    
    for (int i = 0; i < length; i++) {     
        //Compare elements of array with min    
       if(arr[i] < min)    
           min = arr[i];    
    }      
    printf("Smallest element present in given array: %d\n", min);    
    return 0;    
}   */
Q=3
/*

    #include <stdio.h>
    void main()
    {
 
        int i, j, a, n, number[30];
        printf("Enter the value of N \n");
        scanf("%d", &n);
 
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (number[i] > number[j]) 
                {
 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
 
                }
 
            }
 
        }
 
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);
 
    }
*/
Q=4
/*
#include <stdio.h>  
   
int main()  
{  
    //Initialize array   
    int arr[] = {1, 2, 3, 4, 5};   
    //Calculate length of array arr  
    int length = sizeof(arr)/sizeof(arr[0]);  
    //n determine the number of times an array should be rotated  
    int n = 3;  
      
    //Displays original array  
    printf("Original array: \n");  
    for (int i = 0; i < length; i++) {   
        printf("%d ", arr[i]);   
    }   
      
    //Rotate the given array by n times toward right  
    for(int i = 0; i < n; i++){  
        int j, last;  
        //Stores the last element of the array  
        last = arr[length-1];  
      
        for(j = length-1; j > 0; j--){  
            //Shift element of array by one  
            arr[j] = arr[j-1];  
        }  
        //Last element of array will be added to the start of array.  
        arr[0] = last;  
    }  
      
    printf("\n");  
      
    //Displays resulting array after rotation  
    printf("Array after right rotation: \n");  
    for(int i = 0; i< length; i++){  
        printf("%d ", arr[i]);  
    }  
    return 0;  
}  */
Q=5
/*
#include <stdio.h>

int main()
{
	int arr[5];
	int i,j,n=5;
	int ind,ele; //to store index & element
	
	//read array elements
	for(i=0; i<n; i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("Array elements are: ");
	for(i=0; i<n; i++)
		printf("%d ",arr[i]);
	
	printf("\n");
	ind=-1;
	//check first repeated element
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(arr[i]==arr[j])
			{
				ele=arr[j];
				ind=j;
				break;
			}				
		}
		
		if(ind != -1)
			break;
	}
	if(ind!=-1)
		printf("%d repeated @ %d index\n",ele,ind);
	else
		printf("There is no repeated element\n");

	return 0;
}*/
Q=6
/*
#include <stdio.h>    
     
int main()    
{    
    //Initialize array     
    int arr[] = {1, 2, 3, 4, 5};     
        
    //Calculate length of array arr    
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    printf("Original array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }      
        
    printf("\n");    
        
    printf("Array in reverse order: \n");    
    //Loop through the array in reverse order    
    for (int i = length-1; i >= 0; i--) {     
        printf("%d ", arr[i]);     
    }     
    return 0;    
}*/
Q=7
/*
#include <stdio.h>
 
int main()
{
	int arr[10], i, j, Size, Count = 0;
	
	printf("\n Please Enter Number of elements in an array  :   ");
	scanf("%d", &Size);
	
	printf("\n Please Enter %d elements of an Array  :  ", Size);
	for (i = 0; i < Size; i++)
	{
    	scanf("%d", &arr[i]);
   	}     
 
	for (i = 0; i < Size; i++)
	{
		for(j = i + 1; j < Size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			Count++;
				break;
			}
		}
	}

 	printf("\n Total Number of Duplicate Elements in this Array  =  %d ", Count);
	     
 	return 0;
}*/
Q=8
/*
#include <stdio.h>
int main()
{
    int arr1[100], n,ctr=0;
    int i, j, k;
       printf("\n\nPrint all unique elements of an array:\n");
       printf("------------------------------------------\n");	
       printf("Input the number of elements to be stored in the array: ");
       scanf("%d",&n);
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
    printf("\nThe unique elements found in the array are: \n");
    for(i=0; i<n; i++)
    {
        ctr=0;
        for(j=0,k=n; j<k+1; j++)
        {
            
            if (i!=j)
            {
		       if(arr1[i]==arr1[j])
              {
                 ctr++;
               }
             }
        }
       if(ctr==0)
        {
          printf("%d ",arr1[i]);
        }
    }
       printf("\n\n");
}*/
Q=9
/*
#include <stdio.h>
int main() {
  
  int size1, size2, size3;
  printf("\nEnter the size for the first array: ");
  scanf("%d", & size1);
  printf("\nEnter the size for the second array: ");
  scanf("%d", & size2);
  
  size3 = size1 + size2;
  printf("\nEnter the elements in a sorted manner:");
  
  
  int array1[size1], array2[size2], array3[size3];
  
  for (int i = 0; i < size1; i++) {
    scanf("%d", & array1[i]);
    array3[i] = array1[i];
  }
  int k = size1;
  printf("\nEnter the elements in a sorted manner:");
  
  for (int i = 0; i < size2; i++) {
    scanf("%d", & array2[i]);
    array3[k] = array2[i];
    k++;
  }
  printf("\nmerged array of first and second:\n");
  for (int i = 0; i < size3; i++)
    
    printf("%d ", array3[i]);

  printf("\nsorted array in descending order\n");
  
  for (int i = 0; i < size3; i++) {
    int temp;
    for (int j = i + 1; j < size3; j++) {
      if (array3[i] < array3[j]) {
        temp = array3[i];
        array3[i] = array3[j];
        array3[j] = temp;
      }
    }
  }
  
  for (int i = 0; i < size3; i++) {
    printf(" %d ", array3[i]);
  }
  return 0;
}*/
Q=10
/*

 * C program to count frequency of each element of array
 

#include <stdio.h>

int main()
{
    int arr[100], freq[100];
    int size, i, j, count;

    /* Input size of array 
    printf("Enter size of array: ");
    scanf("%d", &size);

    /* Input elements in array 
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);

        /* Initially initialize frequencies to -1 
        freq[i] = -1;
    }


    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            /* If duplicate element is found 
            if(arr[i]==arr[j])
            {
                count++;

                 
                freq[j] = 0;
            }
        }

        /* If frequency of current element is not counted 
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    /*
     * Print frequency of each element
     
    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<size; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}*/