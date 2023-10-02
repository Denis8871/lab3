#pragma once
#include<iostream>
#include<string>

class Money
{
private:
    long long hryvnias;
    unsigned int kopecks;

public:
    // Конструктор за замовчуванням
    Money() : hryvnias(0), kopecks(0) {}

    // Конструктор ініціалізації
    Money(long long hryvnias, unsigned int kopecks) : hryvnias(hryvnias), kopecks(kopecks) {}

    // Конструктор копіювання
    Money(const Money& other) : hryvnias(other.hryvnias), kopecks(other.kopecks) {}

    void Read();
    void Display();
    void Init(long long hryvnias, unsigned int kopecks);
    std::string toString() const;

    Money operator+(const Money& other) const {
        Money result;
        result.hryvnias = this->hryvnias + other.hryvnias;
        result.kopecks = this->kopecks + other.kopecks;
        if (result.kopecks >= 100) {
            result.hryvnias += result.kopecks / 100;
            result.kopecks %= 100;
        }
        return result;
    }

    Money operator-(const Money& other) const {
        Money result;
        result.hryvnias = this->hryvnias - other.hryvnias;
        if (this->kopecks < other.kopecks) {
            result.hryvnias--;
            result.kopecks = 100 - (other.kopecks - this->kopecks);
        }
        else {
            result.kopecks = this->kopecks - other.kopecks;
        }
        return result;
    }

    bool operator<(const Money& other) const {
        if (this->hryvnias == other.hryvnias) {
            return this->kopecks < other.kopecks;
        }
        return this->hryvnias < other.hryvnias;
    }

};

