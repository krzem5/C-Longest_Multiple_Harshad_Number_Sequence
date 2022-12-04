#include <longest_multiple_harshad_number_sequence.h>
#include <stdint.h>
#include <stdio.h>



#define BOUND_LOWER 0x0
#define BOUND_UPPER 0xffffff



int main(int argc,const char** argv){
	uint32_t start;
	uint8_t length=longest_multiple_harshad_number_sequence(BOUND_LOWER,BOUND_UPPER,&start);
	printf("Longest multiple harshard number sequence between %x and %x: %u (start=%x)\n",BOUND_LOWER,BOUND_UPPER,length,start);
	return 0;
}
