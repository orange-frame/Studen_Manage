#pragma once

#include<string>

class Person{
protected:
    int m_age;
    int m_height;
    std::string m_name;
public:
    Person(const std::string name,int age,int height);
    Person(const Person &o);
    ~Person();
    Person& operator=(const Person& other);
    virtual void showInfo()const;
    
    const std::string& name() const;
    void setName(const std::string& name);
    int age() const;
    void setAge(int age);
    int height() const;
    void setHeight(int height);

};