#include "manager.h"
#include "crud.h"

void saveData(Clothes *c); //데이터 저장
int loadData(Clothes *c) {
    ifstream inf("clothesInfo.txt");
    string str;
    getline(inf, str);
}


void searchName(Clothes *c, int count){ //찾아서 출력

}

void searchPrice(Clothes *c, int count){

}

void searchSize(Clothes *c, int count){

}

void searchNum_stars(Clothes *c, int count){

}