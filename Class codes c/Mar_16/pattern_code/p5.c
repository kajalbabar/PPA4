int printf(const char*,...);


void main() {
		int i,j,ch=97;
		int a;
		
		for(i=1;i<=3;i++){
				for(j=1;j<=3;j++){
					printf("%c ",ch);
					ch +=2;
				}
			  printf("\n");
		}
}

