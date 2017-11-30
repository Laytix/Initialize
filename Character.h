/*******************************************************************
*   Character.h
*   Layiwola Olwatobi
*   Programming Assignment 1: Dungeons And Dragons
*   
*   This program is entirely my own work
*******************************************************************/

#include <iostream>
using namespace std;
#include "Item.h"
#pragma once

class Character{

	private:
		
		char m_sName[63];
		int m_iClass, m_iAlignment,m_iHitPoints;
		int m_iCharTraits[5];
		Item m_Items[10];


	

public:
	Character(char *name, int cl, int al, int hp, int str,int dex, int cn, int itl, int wis, int chr);
	~Character();
	Character();

	Character *m_pNext;

	bool addItem(Item *item);
	Item *getItem(char *itemName);
	Item *dropItem(char *itemName);


	void getName(char *name);
	void setName(char *name);

	void getClass(int& cl);
	void setClass(int cl);

	void getAlignment(int& al);
	void setAlignment(int al);

	void getHitPoints(int& hp);
	void setHitPoints(int hp);

	void getStrength(int *str);
	void setStrength(int str) ;

	void getDexterity(int *dex);
	void setDexterity(int dex);

	void getConstitution(int *cn);
	void setConstitution(int cn);

	void getIntelligence(int *itl);
	void setIntelligence(int itl);

	void getWisdom(int *wis);
	void setWisdom(int wis);

	void getCharisma(int *chr);
	void setCharisma(int chr);

	void printAll();
};
