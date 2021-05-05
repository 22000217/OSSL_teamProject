#include "crud.h"

int createClothes(Clothes *c){
    printf("\n");
    printf("제품명? ");
    scanf("%[^\n]s",c->name);//asdasdasdsdfsdf

    printf("가격? ");
    scanf("%d",&c->price);

    printf("사이즈 (S, M, L, F(Free)? ");
    scanf("%c",&c->size);

    printf("리뷰개수? ");
    scanf("%d",&c->review);

    printf("별점개수? ");
    scanf("%d",&c->num_stars);

    printf("별점개수? ");
    scanf("%d",&c->num_stars);

    //linked???///

    printf("==> 추가됨\n"); 
    return 1;
}

void readClothes(Clothes *c){
    printf("%-15s %3dg %4d\n",c->name,c->size,c->price); //어디까지 ?
}

void listClothes(Clothes *c, int count){ //user  read
    printf("\nNo. Name          weight price\n");
    printf("================================\n");
    for(int i=0; i<count; i++){
        if( c[i].price == -1 ) continue;
        printf("%2d.", i+1);
        readProduct(&c[i]);
    }
    printf("\n");
}

int updateClothes(Clothes *c){
    printf("\n");
    printf("제품명? ");
    scanf("%[^\n]s",c->name);

    printf("가격? ");
    scanf("%d",&c->price);

    printf("사이즈 (S, M, L, F(Free)? ");
    scanf("%c",&c->size);

    printf("리뷰개수? ");
    scanf("%d",&c->review);

    printf("별점개수? ");
    scanf("%d",&c->num_stars);

    //linked?

    printf("==> 수정됨\n"); 
    return 1;
}

int deleteClothes(Clothes *c){
    //링크 연결 다르게
    //delete
}