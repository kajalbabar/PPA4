
//call by address
//passing each elememt one by one to the fun by using Address

int printf(const char*,...);
int scanf(const char*,...);

int mult=1;

//for taking Add we need a pointer
void fun(int *a){
		
	mult = mult * (*a);  //derefernce
} 




void main(){
	
	int arr[10],n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
//take elements	
	for(int i=0; i<n ;i++){
		
			scanf("%d",&arr[i]);
	}

	for(int i=0; i<n; i++){
		
	//passign elements by address
			fun( &arr[i]);
	}

	printf("Multiplication is: %d\n",mult);
}
