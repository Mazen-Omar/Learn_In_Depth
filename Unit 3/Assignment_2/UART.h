#ifndef UART_H_
#define UART_H_

#define UART0DR *((volatile unsigned int*)(0x101f1000))

void UART_send_string(char* p_tx_string);

#endif