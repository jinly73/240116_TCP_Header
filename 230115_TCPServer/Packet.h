#pragma once // inclue 두번되면 한번만 되게 끔 해줌

#ifndef __PACKET_H__
#define __PACKET_H__


enum class EPacketType
{
	Caculate = 10,
	Image = 20,
	MAX
};

//[][][][] [][][][][][]..
#pragma pack(push, 1) // 1byte 단위로 압축해주세요 12Byte -> 9Byte = padding
typedef struct _Header
{
	unsigned short Length;
	unsigned short PacketType;
} Header;

typedef struct _Data // class랑 동일하게  struct를 저 네임으로 쓰게끔 해줌 원래라면 앞에 계속 struct 붙혀야함
{
	int FirstNumber;
	int SecondNumber;
	char Operator;
} Data; //Packet

#pragma pack(pop) // padding 끊기

#endif  //__PACKET_H__