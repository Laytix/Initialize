/*******************************************************************
*   Character.cpp
*   Layiwola Olwatobi
*   Programming Assignment 1: Dungeons And Dragons
*   
*   This program is entirely my own work
*******************************************************************/
#include "Character.h"
#include <iostream>

using namespace std;

Character :: Character(){
	cout << endl;
	strcpy(m_sName, "");
	m_iClass = 0;
	m_iAlignment = 0;
	m_iHitPoints = 0;
	m_iCharTraits[0] = 0;
	m_iCharTraits[1] = 0;
	m_iCharTraits[2] = 0;
	m_iCharTraits[3] = 0;
	m_iCharTraits[4] = 0;
	m_iCharTraits[5] = 0;
	
};

Character :: ~Character(){};

Character :: Character(char *name, int cl, int al, int hp, int str,int dex, int cn, int itl, int wis, int chr)
{
	
	strcpy(m_sName,name);
	m_iClass = cl;
	m_iAlignment = al;
	m_iHitPoints = hp;
	m_iCharTraits[0] = str;
	m_iCharTraits[1] = dex;
	m_iCharTraits[2] = cn;
	m_iCharTraits[3] = itl;
	m_iCharTraits[4] = wis;
	m_iCharTraits[5] = chr;


	

};

void Character:: getName(char* name)
	{
		
		
		strcpy(name, m_sName);
		//cout << "testing the getName: " << name << endl;
		
	};

void Character :: setName(char *name){

	strcpy(m_sName, name);

};


 void Character ::getClass(int& cl){

	 cl = m_iClass;
   //cout << "testing the getClass: " << cl << endl;

 };

 void Character :: setClass(int cl){

	 m_iClass = cl;

 }; 

 void Character ::getAlignment(int& al){

	 al = m_iAlignment;
	 //cout << "testing the getAlignment: " << al << endl;



 };

 void Character :: setAlignment(int al){

	 m_iAlignment = al;

 }; 

 
 void Character ::getHitPoints(int& hp){

	 hp = m_iHitPoints;
	 //cout << "testing the getHitPoints: " << hp << endl;

 };

 void Character :: setHitPoints(int hp){

	 m_iHitPoints = hp;

 }; 

 void Character:: getStrength(int *str){

	 *str = m_iCharTraits[0];
	 //cout << "testing the getStrength:  " << *str << endl;

 };

 void Character::setStrength( int str){
	 
	
	 m_iCharTraits[0] = str;
 }

  void Character:: getDexterity(int *dex){
	 
	 *dex = m_iCharTraits[1];
	 //cout << "testing the getDexterity:  " << *dex << endl;

 };

 void Character:: setDexterity(int dex){

	
	m_iCharTraits[1] = dex;
 };

  void Character:: getConstitution(int *cn){
	
	 *cn = m_iCharTraits[2];
	 //cout << "testing the getConstitution:  " << *cn << endl;

 };

 void Character:: setConstitution(int cn){
	 
	 m_iCharTraits[2] = cn;
 };

 void Character:: getIntelligence(int *itl){
	
	 *itl = m_iCharTraits[3];
	 //cout << "testing the getIntelligence:  " << *itl << endl;

 };

 void Character:: setIntelligence(int itl){
	 
	 m_iCharTraits[3] = itl;
 };

 void Character:: getWisdom(int *wis){
	 
	 *wis = m_iCharTraits[4];
	 //cout << "testing the getWisdom:  " << *wis << endl;
		

 };

 void Character:: setWisdom(int wis){
	 
	 
	 m_iCharTraits[4] = wis;
 };

 void Character:: getCharisma(int *chr){
	
	 *chr = m_iCharTraits[5];
	 //cout << "testing the getCharisma:  " << *chr << endl;

 };

 void Character:: setCharisma(int chr){
	 
	 m_iCharTraits[5] = chr;
 };

 void Character :: printAll(){

	 cout <<"Character's Name: " << m_sName << endl;
	 cout <<"Character's Class: " << m_iClass << endl;
	 cout <<"Character's Alignment: "<< m_iAlignment << endl;
	 cout <<"Character's HitPoint: " << m_iHitPoints << endl;
	 cout <<"Character's Strength: " << m_iCharTraits[0] << endl;
	 cout <<"Character's Dexterity: "<< m_iCharTraits[1] << endl;
	 cout <<"Character's Constitution: " << m_iCharTraits[2] << endl;
	 cout <<"Character's Intelligence: " << m_iCharTraits[3] << endl;
	 cout <<"Character's Wisdom: " << m_iCharTraits[4] << endl;
	 cout <<"Character's Charisma: " << m_iCharTraits[5] << endl;
	 
 }


