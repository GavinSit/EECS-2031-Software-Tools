/***************************************
* EECS2031 – Lab 4 *
* Author: Sit, Gavin *
* Email: gavinsit@my.yorku.ca *
* eecs_username: gavinsit *
* York Student #: 215043870
****************************************/

int main(int argc, char *argv[]) {
	int age = 10;
	int age2 = 100;
	int *ptr, *ptr2;
	ptr = &age;
	ptr2 = &age2;
	printf("age: %d ptr: %d \n", age, *ptr);
	
	*ptr = 14;
	printf("age: %d ptr: %d \n", age, *ptr);
	
	*ptr2 = *ptr; 
	printf("age2: %d ptr2: %d \n", age2, *ptr2);
	
	ptr2 = &age;
	printf("ptr2: %d \n", *ptr2);
	
	*ptr2 --;
	ptr2 = &age;
	printf("age: %d ptr: %d ptr2: %d \n", age, *ptr, *ptr2);
	return 0; 
}

