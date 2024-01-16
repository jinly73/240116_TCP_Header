#pragma once // inclue �ι��Ǹ� �ѹ��� �ǰ� �� ����

#ifndef __PACKET_H__
#define __PACKET_H__


enum class EPacketType
{
	Caculate = 10,
	Image = 20,
	MAX
};

//[][][][] [][][][][][]..
#pragma pack(push, 1) // 1byte ������ �������ּ��� 12Byte -> 9Byte = padding
typedef struct _Header
{
	unsigned short Length;
	unsigned short PacketType;
} Header;

typedef struct _Data // class�� �����ϰ�  struct�� �� �������� ���Բ� ���� ������� �տ� ��� struct ��������
{
	int FirstNumber;
	int SecondNumber;
	char Operator;
} Data; //Packet

#pragma pack(pop) // padding ����

#endif  //__PACKET_H__