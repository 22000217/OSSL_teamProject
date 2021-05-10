#include "crud_cpp.h"

void Clothes::set_data(string n, int p, string s, int r, int ns) {
    name = n;
    price = p;
    size = s;
    review = r;
    numStars = ns;
}

void Clothes::set_name(string n) {
    name = n;
}

void Clothes::set_price(int p) {
    price = p;
}

void Clothes::set_size(string s) {
    size = s;
}

void Clothes::set_review(int r) {
    review = r;
}

void Clothes::set_numStars(int ns) {
    numStars = ns;
}

string Clothes::get_name() {
    return name;
}

int Clothes::get_price() {
    return price;
}

string Clothes::get_size() {
    return size;
}

int Clothes::get_review() {
    return review;
}

int Clothes::get_numStars() {
    return numStars;
}

Clothes* Clothes::get_link() {
    return link;
}

Product:: Product() {
    head = NULL;
    tail = NULL;
}

void Product::add_to_tail(Clothes c) {
    Clothes *tmp;
    tmp = new Clothes;
    (*tmp) = c;
    tmp->link = NULL;
    if (tail!= NULL) {
        tail->link = tmp;
    }
    else {
        head = tmp;
    }
    tail = tmp;
}

Clothes Product::delete_from_head() {
    Clothes tmp;
    Clothes *c;
    c = head;
    tmp = *head;
    head = head->link;
    delete c;
    if (head == NULL) {
        tail = NULL;
    }
    return tmp;
}

int Product::num_nodes() {
    Clothes *c;
    int count = 0;
    for (c = head; c!= NULL; c = c->link) {
        count++;
    }
    return count;
}

bool Product::list_empty() {
    if (head == NULL) {
        return true;
    }
    else {
        return false;
    }
}

Clothes* Product::get_product(string p_name) {
    Clothes *c;
    string name;
    double result;
    for (c = head; c!=NULL; c = c->link) {
        if (c->get_name() == p_name) {
            return c;
        }
    }
}

int Product::remove_product(string p_name) {
    Clothes *c, *c2;
    int result=0;
    for (c = head; c!=NULL; c = c->link) {
        if (c->get_name() == p_name) {
            if (c->link == NULL) {
                delete c;
                head = tail = NULL;
                result = 1;
                break;
            }
            c2->link = c->link;
            delete c;
            result = 1;
        }
        c2 = c;
    }
    return result;
}

Clothes createClothes() {
    Clothes c;
    string tmp;
    int price, review, numStars;
    char size;
    printf("\n");
    printf("��ǰ��? ");
    cin >> tmp;
    c.set_name(tmp);

    printf("����? ");
    scanf("%d",&price);
    c.set_price(price);

    printf("������ (S, M, L, F(Free)? ");
    cin >> tmp;
    c.set_size(tmp);

    printf("���䰳��? ");
    scanf("%d",&review);
    c.set_review(review);

    printf("��������? ");
    scanf("%d",&numStars);
    c.set_numStars(numStars);

    return c;
}

void readClothes(Clothes *c) {
    Clothes *tmp;
    int count=0;
    for (tmp = c; tmp!=NULL; tmp = tmp->link) {
        cout << tmp->get_name() << " " << tmp->get_size();
        printf("  %4d\n", tmp->get_price());
        count++;
    }
    printf("........(�� %d��)\n", count);
}

int updateClothes(Clothes *c) {
    string tmp;
    int price, review, numStars;
    printf("\n");
    printf("��ǰ��? ");
    cin >> tmp;
    c->set_name(tmp);

    printf("����? ");
    scanf("%d",&price);
    c->set_price(price);

    printf("������ (S, M, L, F(Free)? ");
    cin >> tmp;
    c->set_size(tmp);

    printf("���䰳��? ");
    scanf("%d",&review);
    c->set_review(review);

    printf("��������? ");
    scanf("%d",&numStars);
    c->set_numStars(numStars);
    return 1;
}

int menu() {
    int m;
    printf("\n[1]��� [2]�߰� [3]���� [4]���� [0]���� >> ");
    scanf("%d", &m);
    return m;
}

int category() {
    int type;
    printf("ī�װ� (0:����, 1:����, 2:�巹��, 3:��ü)? ");
    scanf("%d", &type);
    return type;
}