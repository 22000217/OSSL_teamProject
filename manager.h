#include <iostream>
#include <fstream> //fout
#include <cstring>
#include <string.h>
#include "class.h"

void saveData(string filename, Clothes *c); //데이터 저장
void loadData(string filename, Clothes *c); //데이터 읽어오기

int searchName(Clothes *c, int count, string target);
int searchPrice(Clothes *c, int count, int target);
int searchSize(Clothes *c, int count, string target);
int searchNum_stars(Clothes *c, int count, int target);
