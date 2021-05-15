## 구성한 기능(함수)
---
# __CRUD__
## Clothes createClothes() 
 Create : 카테고리 맞는 새 구조체 생성

## void readClothes(Clothes *c)
 Read : 카테고리 맞는 구조체들 읽어오기

## int updateClothes(Clothes *c) 
 Update : 대상 구조체 수정

## int deleteClothes(Product *p)
 Delete : 대상 구조체 삭제

---
# __DATA FILE__
## void saveData(string filename, Clothes *c);
 데이터 저장

## void loadData(string filename, Clothes *c); 
 데이터 읽어오기

---
# __검색__
## void searchName(Clothes *c, int count, string target)
 이름으로 검색

## void searchPrice(Clothes *c, int count, int target)
 가격으로 검색

## void searchSize(Clothes *c, int count, string target)
 사이즈로 검색

## void searchNum_stars(Clothes *c, int count, int target)
 별 개수로 검색
