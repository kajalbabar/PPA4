int printf(const char *,...);
 
int c=30;		//global varible

void main() {
		void fun() {
			int a=10;
			printf("%d\n",a);
			a=a+1;
			printf("%d\n",a);
			printf("%d\n",c);
                }

 		c=40;
		
		void gun() {
			int b=20;
			printf("%d\n",b);
			b=b-1;
			printf("%d\n",b);
			printf("%d\n",c);
		}

	gun(); 		//function call
	fun();
		 	
			
}	//End of Hall		
