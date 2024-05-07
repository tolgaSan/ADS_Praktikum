/*************************************************
* ADS Praktikum 1.1
* Ring.h
* Erweiterung um Hilfsfunktionen gestattet.
*************************************************/
// Ring .h
#pragma once
#include<string>
#include "catch.h"
#include"RingNode.h"

class Ring{
	
	private:
		// Ihr Code hier:	
		int m_countNodes = 0;
		RingNode* m_anker = nullptr;
		//
		////////////////////////////////////
	public:
		// Ihr Code hier:
		Ring(){};
		~Ring();
		void addNewNode(std::string, std::string);
		bool search(std::string node);
		void addNode(std::string, std::string);
		void print();
		void menu_auswahl();
		//
		////////////////////////////////////
		// friend Funktionen müssen unangetastet bleiben! 
		friend RingNode * get_anker(Ring& r);
		friend int get_countNodes(Ring& r);
};
