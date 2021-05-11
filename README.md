# OSSL_teamProject

👗옷팡👗
===
mini project 주제
----------------
온라인 쇼핑몰 관리

- 팀원
   - __김민채__
      - 역할 : 테스터, 검색, 파일저장, 자료조사
      - Github ID : alsco1234
  
  - __나예원__
    * 역할 : 깃헙 관리, CRUD와 파일읽기 구현, 툴짜기
    * Github ID : 22000217

----------------
## 사용한 언어
# C++

## 구성한 기능(함수)
---
# __CRUD__
## Clothes createClothes()
 Create : 카테고리 맞는 새 구조체 생성

## void readClothes(Clothes *c)

## void listClothes(Clothes *c, int count)
 Read : 카테고리 맞는 구조체들 읽어오기

## int updateClothes(Clothes *c) 
 Update : 대상 구조체 수정

## int deleteClothes(Clothes *c) 
 Delete : 대상 구조체 삭제

---
# __DATA FILE__
## void saveData(Clothes *c, int count);
 데이터 저장

## int loadData(Clothes *c); 
 데이터 읽어오기

---
# __검색__
## int searchName(Clothes *c, int count)
 이름으로 검색

## int searchPrice(Clothes *c, int count)
 가격으로 검색

## int searchSize(Clothes *c, int count)
 사이즈로 검색

## int searchNum_stars(Clothes *c, int count)
 별 개수로 검색
