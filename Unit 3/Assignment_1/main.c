#include <stdint.h>


#define RCC_BASE           0x40021000
#define PORTA_BASE         0x40010800
#define RCC_APB2ENR        *(volatile uint32_t*) (RCC_BASE    +  0x18)
#define GPIOA_CRH          *(volatile uint32_t*) (PORTA_BASE  +  0x04)
#define GPIOA_ODR          *(volatile uint32_t*) (PORTA_BASE  +  0x0C)
#define SET_BIT(X,POS)	   (X|=(1<<POS))
#define CLEAR_BIT(X,POS)   (X&=~(1<<POS))


typedef volatile unsigned int vuint32_t;

typedef union{
    vuint32_t all_fields;
    struct
    {
        vuint32_t reserved:13;
        vuint32_t pin13:1;
    }pin;
}R_ODR_t;

volatile R_ODR_t* R_ODR = (volatile R_ODR_t*)(PORTA_BASE + 0x0C);

int main(void)
{
    SET_BIT(RCC_APB2ENR,2) ;  				// Enable clock for GPIO Port A
    GPIOA_CRH &= 0xFF0FFFFF; 				// Clear configuration for Pin 13
    GPIOA_CRH |= 0x00200000;	  		    // Set Pin 13 as General-purpose output push-pull

    while(1)
    {
    					//Toggling Pin 13
    	R_ODR->pin.pin13 = 1;  				// Set Pin 13 high
    	for(int i = 0; i < 5000; i++);		//Delay
    	R_ODR->pin.pin13 = 0;				// Clear Pin 13 high
    	for(int i = 0; i < 5000; i++);		//Delay
    }

    return 0;
}
