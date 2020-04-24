#pragma once


class Wizard
{
public:
    virtual void info() = 0;
    virtual ~Wizard() = default;
    int health = 90;
    int power = 25;
};


class Elf
{
public:
    virtual void info() = 0;
    virtual ~Elf()= default;
    int health = 100;
    int power = 20;
};


class Giant
{
public:
    virtual void info() = 0;
    virtual ~Giant() = default;
    int health = 125;
    int power = 30;
};
