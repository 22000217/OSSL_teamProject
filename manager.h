#include <iostream>
#include <fstream>
#include <cstring>
#include "class.h"

void saveData(Clothes *c); //데이터 저장
int loadData(Clothes *c); //데이터 읽어오기

void searchName(Clothes *c, int count);
void searchPrice(Clothes *c, int count);
void searchSize(Clothes *c, int count);
void searchNum_stars(Clothes *c, int count);
