#include <iostream>
#include "crud_cpp.h"
#define QUIT 0
#define READ 1
#define CREATE 2
#define UPDATE 3
#define DELETE 4
#define SEARCH 5
#define SAVE 6

int main() {
    Product top, bot, dress;
    Clothes tmp;
    string CATEGORY[3] = {"상의","하의","드레스"}, temp;
    int cmd, type, check=1, count=0, edited_count=0;
    do {
        cmd = menu();
        switch (cmd) {
            case READ:
                switch (category()) {
                    case 0:
                        if (top.list_empty()) {
                            printf("등록된 상품이 없습니다.\n");
                            break;
                        }
                        else {
                            printf("제품 정보입니다.\n");
                            readClothes(top.head);
                        }
                        break;
                    case 1:
                        if (bot.list_empty()) {
                            printf("등록된 상품이 없습니다.\n");
                            break;
                        }
                        else {
                            printf("제품 정보입니다.\n");
                            readClothes(bot.head);
                        }
                        break;
                    case 2:
                        if (dress.list_empty()) {
                            printf("등록된 상품이 없습니다.\n");
                            break;
                        }
                        else {
                            printf("제품 정보입니다.\n");
                            readClothes(dress.head);
                        }
                        break;
                    case 3:
                        if (top.list_empty() || bot.list_empty() || dress.list_empty()) {
                            printf("등록된 상품이 없습니다.\n");
                            break;
                        }
                        else {
                            printf("상의>\n");
                            readClothes(top.head);
                            printf("\n하의\n");
                            readClothes(bot.head);
                            printf("\n드레스\n");
                            readClothes(dress.head);
                        }
                }
                break;
            case CREATE:
                tmp = createClothes();
                switch (category()) {
                    case 0:
                        top.add_to_tail(tmp);
                        break;
                    case 1:
                        bot.add_to_tail(tmp);
                        break;
                    case 2:
                        dress.add_to_tail(tmp);
                        break;
                    default:
                        cout << "ERROR" << endl;
                        check=0;
                }
                if (check==1) printf("==> Add\n");
                break;
            case UPDATE:
                switch (category()) {
                    case 0:
                        if (top.list_empty()) {
                            printf("등록된 상품이 없습니다.\n");
                            break;
                        }
                        readClothes(top.head);
                        printf("수정하고 싶은 제품 이름? ");
                        cin >> temp;
                        check = updateClothes(top.get_product(temp));
                        break;
                    case 1:
                        if (bot.list_empty()) {
                            printf("등록된 상품이 없습니다.\n");
                            break;
                        }
                        readClothes(bot.head);
                        printf("수정하고 싶은 제품 이름? ");
                        cin >> temp;
                        check = updateClothes(bot.get_product(temp));
                        break;
                    case 2:
                        if (dress.list_empty()) {
                            printf("등록된 상품이 없습니다.\n");
                            break;
                        }
                        readClothes(dress.head);
                        printf("수정하고 싶은 제품 이름? ");
                        cin >> temp;
                        check = updateClothes(dress.get_product(temp));
                        break;
                    default:
                        cout << "ERROR" << endl;
                        check=0;
                }
                if (check==1) printf("==> 수정됨\n");
                break;
            case DELETE:
                switch (category()) {
                    case 0:
                        if (top.list_empty()) {
                            printf("등록된 상품이 없습니다.\n");
                            break;
                        }
                        readClothes(top.head);
                        printf("삭제하고 싶은 제품 이름? ");
                        cin >> temp;
                        check = top.remove_product(temp);
                        break;
                    case 1:
                        if (bot.list_empty()) {
                            printf("등록된 상품이 없습니다.\n");
                            break;
                        }
                        readClothes(bot.head);
                        printf("삭제하고 싶은 제품 이름? ");
                        cin >> temp;
                        check = bot.remove_product(temp);
                        break;
                    case 2:
                        if (dress.list_empty()) {
                            printf("등록된 상품이 없습니다.\n");
                            break;
                        }
                        readClothes(dress.head);
                        printf("삭제하고 싶은 제품 이름? ");
                        cin >> temp;
                        check = dress.remove_product(temp);
                        break;
                    default:
                        cout << "ERROR" << endl;
                        check=0;
                }
                if (check==1) printf("==> 삭제됨\n");
                break;
            default:
                break;
        }
    } while(cmd != QUIT);
    printf("종료되었습니다.\n");
    return 0;
}
