#pragma once


class MyClass
{
public:
    MyClass() = default;
    virtual ~MyClass() = default;

    void set_value(int n);
    int get_value();

private:
    int value = 0;
};