//Constant string literal


int printf(const char*,...);

void main(){
		//string and pointer both are constants
		const char  *const ptr="kajal";
		printf("%c\n",*ptr);
		//we cannot change the address
		ptr++;
		printf("%c\n",*ptr);
}
