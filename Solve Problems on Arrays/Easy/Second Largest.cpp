class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    int maxi=-1;
	    int maxi2=-1;
	    for(int i=0;i<n;i++){
	        if(arr[i]>maxi){
	            maxi=arr[i];
	        }
	    }
	        for(int i=0;i<n;i++){
	        if( arr[i]>maxi2 && arr[i]<maxi){
	            maxi2=arr[i];
	        }
	    }
	    return maxi2;
	}
};
