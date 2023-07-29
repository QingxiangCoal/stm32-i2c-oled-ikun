#ifndef __OLED_H
#define __OLED_H

typedef unsigned          char uint8_t;
typedef unsigned short     int uint16_t;
//typedef unsigned           int uint32_t;
//typedef   signed           int int32_t;
void OLED_Init(void);
void OLED_WriteData(uint8_t Data);
void OLED_Fill(uint8_t Data);
void OLED_Clear(void);
void OLED_ShowChar(uint8_t Line, uint8_t Column, char Char);
void OLED_ShowString(uint8_t Line, uint8_t Column, char *String);
void OLED_ShowNum(uint8_t Line, uint8_t Column, uint32_t Number, uint8_t Length);
void OLED_ShowSignedNum(uint8_t Line, uint8_t Column, int32_t Number, uint8_t Length);
void OLED_ShowHexNum(uint8_t Line, uint8_t Column, uint32_t Number, uint8_t Length);
void OLED_ShowBinNum(uint8_t Line, uint8_t Column, uint32_t Number, uint8_t Length);
void OLED_WriteCommand(uint8_t Command);
void Show_Bmp(unsigned char x0,unsigned char y0,unsigned char x1,unsigned char y1,unsigned char BMP[]);

#endif