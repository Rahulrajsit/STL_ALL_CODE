// HashFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include"Source.h"

#include<forward_list>

using namespace std;

int main()
{
	cout << "VECTOR SIZE IS " << vecData.size() << endl;
	cout << "FORWARD LIST SIZE IS " << "_" << endl;
	cout << "ARRAY SIZE IS " << arrData.size() << endl;
	cout << "SET SIZE IS " << setData.size() << endl;
	cout << "MAP SIZE IS " << mapData.size() << endl;

	cout << "\n=====MAP VALUE====\n";
	map<int, string>::iterator itr;
	for (itr = mapData.begin(); itr != mapData.end(); itr++)
		cout << itr->first << " " << itr->second << endl;

	itr=mapData.find(2);
	cout << "find data as per key: ";
	cout << itr->first << " " << itr->second << endl;
	cout << endl;

	cout << "\n=====ARRAY VALUE initilized with size and default value is 0====\n";
	for (int X : arrData)
		cout << X << ' ';
	cout << endl;

	cout << "\n=====VECTOR VALUE====\n";
	for (int X : vecData)
		cout << X << ' ';
	cout << endl;

	cout << "\n=====SET VALUE Not allow duplicate====\n";
	setData.insert(20);
	setData.insert(120);
	setData.insert(230);
	setData.insert(20);
	setData.insert(210);
	setData.insert(120);
	cout << endl;
	for (int X : setData)
		cout << X << ' ';
	cout << "\nSET SIZE IS " << setData.size();


	cout << endl;
	
	
	cout << "\n=====FORWARD LIST====\n";
	forData.push_front(3);
	forData.push_front(2);
	forData.push_front(5);
	forData.push_front(4);

	forData.pop_front();

	forData.insert_after(forData.begin(), 122);
	forData.emplace_after(forData.begin(), 92);

	cout << "\nBefore Sort" << endl;
	for (int& temp : forData) {
		cout << temp << ' ';
	}
	forData.sort();
	cout << "\nAfter Sort" << endl;
	for (auto itr = forData.begin(); itr != forData.end(); itr++) {
		cout << *itr << ' ';
	}

	cout << endl;
	return 0;
}