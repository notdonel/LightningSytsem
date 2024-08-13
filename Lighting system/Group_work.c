#include "RIMS.h"

unsigned char get_bit(unsigned char x, int k) {
    return ( (x & (0x01 << k)) != 0 );
}

void main() {
    unsigned char i;
    unsigned char cnt;
    
    B = 0;
    while (1) {  // Infinite loop with proper condition
        cnt = 0;
        for (i = 0; i < 8; i++) {
            if (get_bit(A, i)) {
                cnt++;
            }
        }
        B = cnt;
    }
}
