#include "manager.h"

void saveData(string filename, Clothes *c){ //데이터 저장
    ofstream fout;
    Clothes *ahead;
    fout.open(filename);
    if(fout.is_open()){
        for (ahead = c->link; ahead!=NULL; ahead = ahead->link){
            fout << ahead->get_name() << "/" << ahead->get_price() << "/" << 
                ahead->get_size() << "/" << ahead->get_review() << "/" << ahead->get_numStars() << endl;
        }
    }
    fout.close();
}

void loadData(string filename, Clothes *c) { //데이터 불러오기
    ifstream inFile;
    Clothes tmp;
    string newname, newsize;
    int newprice, newreview, newnumStars;
    inFile.open(filename);
    while(!inFile.eof()){
            tmp = createClothes(newname, newprice, newsize, newreview, newnumStars);
            c.add_to_tail(tmp);
        }
    inFile.close();
}


int searchName(Clothes *c, int count, string target){
    Clothes* curr = c;
    char listname[80];
    char targetname[80];
    while(curr!=NULL){
        strcpy(listname,curr->get_name().c_str());
        strcpy(targetname,target.c_str());
        if(strstr(listname,targetname)) {
            cout << curr->get_name() << " / " << curr->get_size();
            printf(" / %5d\n", curr->get_price());
        }
        else curr = curr->link;
    }
    if(curr==NULL) cout << "target is not found" << endl;
}

int searchPrice(Clothes *c, int count, int target){
    Clothes* curr = c;
    while(curr!=NULL){
        if(curr->get_price() == target) {
            cout << curr->get_name() << " / " << curr->get_size();
            printf(" / %5d\n", curr->get_price());
        }
        else curr = curr->link;
    }
    if(curr==NULL) cout << "target is not found" << endl;
}

int searchSize(Clothes *c, int count, string target){
    Clothes* curr = c;
    while(curr!=NULL){
        if(curr->get_size() == target) {
            cout << curr->get_name() << " / " << curr->get_size();
            printf(" / %5d\n", curr->get_price());
        }
        else curr = curr->link;
    }
    if(curr==NULL) cout << "target is not found" << endl;
}

int searchNum_stars(Clothes *c, int count, int target){
    Clothes* curr = c;
    while(curr!=NULL){
        if(curr->get_numStars() == target) {
            cout << curr->get_name() << " / " << curr->get_size();
            printf(" / %5d\n", curr->get_price());
        }
        else curr = curr->link;
    }
    if(curr==NULL) cout << "target is not found" << endl;
}
