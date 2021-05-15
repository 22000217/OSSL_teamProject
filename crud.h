#include <iostream>
#include <cstring>
#include "class.h"

using namespace std;

int menu();

int category();

Clothes createClothes();
Clothes createClothes(string newname, int newprice, string newsize, int newreivew, int newnumStars);

void readClothes(Clothes *c);

int updateClothes(Clothes *c);

int deleteClothes(Product *p);