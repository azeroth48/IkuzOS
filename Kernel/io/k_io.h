/* 
 * File:   io.h
 * Author: bdallen
 *
 * Created on May 26, 2010, 9:44 PM
 */

void outb(unsigned short port, unsigned char data);
void outw(unsigned short port, unsigned char data);
unsigned char inb(unsigned short port);
unsigned char inw(unsigned short port);

