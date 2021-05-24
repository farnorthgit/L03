
#ifndef L02_NAME_H
#define L02_NAME_H


class Name {
public:
    Name();
    Name(const Name &original);
    Name(int x);
    ~Name();
    int getAge();
private:
    int _x;
};


#endif //L02_NAME_H
