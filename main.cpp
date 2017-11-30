/*******************************************************************
*   main.cpp
*   Layiwola Oluwatobi
*   Programming Assignment 1: Dungeons And Dragons
*   
*   This program is entirely my own work
*******************************************************************/

#include <iostream>
#include <fstream>
#include "Character.h"
using namespace std;


int main (void){
	char name[63] = "Trooper";
	char m_sName[63];
	int m_iClass;
	int m_iAlignment;
	int m_iHitPoints;
	int m_iCharTraits[6];//the program crashes when the array is on the last element, having an extra element seems to do the trick
	int cl = 98;
	int al = 68;
	int hp = 95;
	int dex = 99;
	int str = 86;
	int cn = 67;
	int itl = 74;
	int wis = 50;
	int chr = 85;

	
//	Character *cpt = new Character("Trooper", 4, 5, 6, 23, 45, 5, 34, 65, 23);

	Character *cpt = new Character();
	
	cpt->setName(name);

	cpt->getName(m_sName);

	

	cpt->setClass(cl);
	cpt->getClass(m_iClass);

	cpt->setAlignment(al);
	cpt->getAlignment(m_iAlignment);

	cpt->setHitPoints(hp);
	cpt->getHitPoints(m_iHitPoints);


	cpt->setStrength(str);
	cpt->getStrength(&m_iCharTraits[0]);

	


	cpt->setDexterity(dex);
	cpt->getDexterity(&m_iCharTraits[1]);

	

	cpt->setConstitution(cn);
	cpt->getConstitution(&m_iCharTraits[2]);

	

	cpt->setIntelligence(itl);
	cpt->getIntelligence(&m_iCharTraits[3]);

	cpt->setWisdom(wis);
	cpt->getWisdom(&m_iCharTraits[4]);

	

	cpt->setCharisma(chr);
	cpt->getCharisma(&m_iCharTraits[5]);

	

	cpt->printAll();





};