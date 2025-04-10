#include "Person.h"
#include <iostream>

Person::Person(const std::string name,int age,int height)
                :m_name(name),m_age(age),m_height(height){}

Person::Person(const Person &o)
                :m_name(o.m_name),m_age(o.m_age),m_height(o.m_height){}

Person::~Person(){}

Person& Person::operator=(const Person& other){
    if (this != &other)
    {
        /* code */
        m_name = other.m_name;
        m_age = other.m_age;
        m_height = other.m_height;
    }
    return * this;
}

void Person::showInfo()const{
    std::cout<<"Name: " << m_name
             <<", Age: "<< m_age
             <<", Height: "<< m_height<<std::endl;
}
    
const std::string& Person::name() const{
    return m_name;
}

void Person::setName(const std::string& name){
    m_name = name;
}

int Person::age() const{
    return m_age;
}

void Person::setAge(int age){
    m_age = age;
}

int Person::height() const{
    return m_height;
}

void Person::setHeight(int height){
    m_height =  height;
}
