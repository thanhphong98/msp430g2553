/*
 * LCD_16x2.h
 *
 *  Created on: 3 thg 7, 2018
 *      Author: Phong
 */

#include <msp430.h>
#include <stdint.h>

#include "../DS1307/DS1307.h"
#include "../define.h"



#ifndef LCD_16X2_LCD_16X2_H_
#define LCD_16X2_LCD_16X2_H_

#define USE_LCD_WAIT


#define Shift_Data      0
#define Time_Blinky     500000

#define PORT_LCD_SEL    P2SEL
#define PORT_LCD_SEL2   P2SEL2
#define PORT_LCD_DIR    P2DIR
#define PORT_LCD_REN    P2REN
#define PORT_LCD_OUT    P2OUT
#define PORT_LCD_IN     P2IN
#define PORT_LCD_EN     P2OUT
#define PORT_LCD_RS     P2OUT
#define PORT_LCD_RW     P2OUT

#define LCD_DEC_CUR_SHIFT_ON()  LCD_Write_Command(0x05);
#define LCD_DEC_CUR_SHIFT_OFF() LCD_Write_Command(0x04);
#define LCD_INC_CUR_SHIFT_ON()  LCD_Write_Command(0x07);
#define LCD_INC_CUR_SHIFT_OFF() LCD_Write_Command(0x06);

#define LCD_EN          0x08
#define LCD_RS          0x02
#define LCD_RW          0x04




extern void LCD_Init(void);
extern void LCD_Write_Command(uint8_t command);
extern void LCD_Clear(void);
extern void LCD_Home(void);
extern void LCD_Wait(void);
extern char LCD_Read_Nibble(void);
extern void LCD_Put_Char(char chr);
extern void LCD_Put_String(char *str);
extern void LCD_Goto(uint8_t row, uint8_t col);
extern void LCD_Cursor_Shift(unsigned char direct, unsigned char step);
extern void LCD_Put_Decimal(long n, unsigned char length);
extern void LCD_Put_Un_Decimal(long n, unsigned char length);
extern void LCD_Put_Float(float x, unsigned char length, unsigned char coma);
extern void DS1307_LCD_Put_Time(void);
extern void DS1307_LCD_Put_Time(void);
extern void DS1307_LCD_Put_Time_Blink_Hour(void);
extern void DS1307_LCD_Put_Time_Blink_Min(void);
extern void DS1307_LCD_Put_Time_Blink_Sec(void);
extern void DS1307_LCD_Put_Time_Blink_Date(void);
extern void DS1307_LCD_Put_Time_Blink_Day(void);
extern void DS1307_LCD_Put_Time_Blink_Mon(void);
extern void DS1307_LCD_Put_Time_Blink_Year(void);


#endif /* LCD_16X2_LCD_16X2_H_ */
