int printf(const char*,...);
int scanf(const char*,...);

void main(){
		
		int var;
	
		var=5;//for end portion
		int num=1,num2,num3=1;
		

		for(int i=1 ;i<=9 ;i++)	{
				
				
				num2=1;
				for(int j=1; j<=var ; j++,num2){
					
					
					if(i <= 5){
						if(i+j > 5 && (i+j)%2 == 0)
							printf(" %d ",num2++);
						else
							printf("   ");
					}
					
					else{
						
						if(j>num && (i+j)%2 ==0 )
							printf(" %d ",num+(num3++));
					else
							printf("   ");
					
					
					}

				}
				
				if(i< 5){
					var++;
				}
				else{
					var--;
				}	

				if(i>5)
					num++,num3=1;
					
				
				printf("\n");
			}
}
