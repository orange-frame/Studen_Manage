#pragma once
#include"Person.h"
#include<string>
#include<iostream>

class Student:Person{
protected:
    std::string m_sid;
public:
    Student(std::string sid, std::string name, int age, int height);
    ~Student();
    virtual void showInfo() const override;
    Student& operator=(const Student &other);
    friend std::ostream& operator<<(std::ostream &os, const Student &s );
    bool compareSid( const std::string &sid )const; 
    void setSid(const std::string id); 
    const std::string& sid()const; 
};
